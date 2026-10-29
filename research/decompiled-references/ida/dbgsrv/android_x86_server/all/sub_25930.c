/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25930
// Address: 0x00025930

//----- (00025930) --------------------------------------------------------
unsigned int __cdecl sub_25930(int a1, int a2, char a3, char *a4, char *a5, int a6, char *a7)
{
  char *v7; // esi
  char *i; // eax
  int v10[3]; // [esp+28h] [ebp-1024h] BYREF
  int v11; // [esp+34h] [ebp-1018h] BYREF
  char s[4096]; // [esp+38h] [ebp-1014h] BYREF
  unsigned int v13; // [esp+1038h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  *(_DWORD *)a1 = &off_1346A0;
  *(_DWORD *)(a1 + 1028) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  sub_1B530(a1 + 1040, a4);
  sub_1B530(a1 + 1052, a5);
  sub_1B530(a1 + 1064, a7);
  *(_DWORD *)(a1 + 1076) = a6;
  v7 = ";";
  if ( a3 )
    v7 = ":";
  *(_BYTE *)(a1 + 4) = 0;
  qstrncpy((unsigned int)s, a2, 4096);
  for ( i = (char *)qstrtok(s, v7, (const char **)&v11); i; i = (char *)qstrtok(nullptr, v7, (const char **)&v11) )
  {
    sub_1B530((int)v10, i);
    sub_2DAC0(a1 + 1028, (char *)v10);
    if ( v10[0] )
    {
      v10[1] = 0;
      qfree((void *)v10[0]);
      v10[0] = 0;
      v10[2] = 0;
    }
  }
  return __readgsdword(0x14u);
}
// 1346A0: using guessed type int (__cdecl *off_1346A0)(int, int);
