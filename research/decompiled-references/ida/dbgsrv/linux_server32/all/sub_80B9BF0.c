/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9BF0
// Address: 0x080B9BF0

//----- (080B9BF0) --------------------------------------------------------
int __cdecl sub_80B9BF0(int a1, int a2, int a3, char **a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  char *v6; // eax
  char *v7; // ecx
  size_t v8; // edx
  char *v9; // eax

  v4 = (unsigned int)a4[1];
  v5 = v4 + 3;
  if ( v4 >= 0xFFFFFFFD )
  {
    v5 = 0x7FFFFFFF;
  }
  else
  {
    v6 = *a4;
    v7 = a4[1];
    v8 = 3;
    if ( (unsigned int)a4[2] < v5 )
    {
      v6 = (char *)sub_80CF920((int)a4, v6, v5, 1u);
      v7 = a4[1];
      *a4 = v6;
      v8 = v5 - (_DWORD)v7;
    }
    memset(&v6[(_DWORD)v7], 0, v8);
  }
  v9 = *a4;
  a4[1] = (char *)v5;
  *(_WORD *)&v9[v4] = -5172;
  v9[v4 + 2] = -2;
  return 0;
}
