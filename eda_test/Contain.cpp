#include "Contain.h"


void JudgeContain(char* child, char* parent)
{
	if (strlen(child) != strlen(parent))
	{
		cout << "����һ��ά����:(!" << endl;
		return;
	}
	int common_len = strlen(child);
	for (int i = 0; i < common_len; i++)
		if (child[i] != 'x' && parent[i] != 'x' && child[i] != parent[i])
		{
			cout << child << " !=> " << parent << endl;
			return;
		}
	cout << child << " => " << parent << endl;
}