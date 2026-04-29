__int64 __fastcall sub_F0D30(char *s1, int a2, __int64 *a3, int a4)
{
  char **v5; // rbx
  int v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v5 = &off_4AFA80;
  v10 = __readfsqword(0x28u);
  if ( s1 )
  {
    while ( *((_DWORD *)v5 + 2) != a2 || strcmp(s1, *v5) )
    {
      v5 += 2;
      if ( v5 == (char **)&unk_4AFC50 )
        goto LABEL_3;
    }
  }
  else
  {
    do
      v5 += 2;
    while ( v5 != (char **)&unk_4AFC50 );
LABEL_3:
    if ( a2 <= 1 || !(unsigned int)sub_E30D0(&v9, &v8, s1, a3, a4) || v9 != 1 || v8 >= a2 )
      return 0;
  }
  return 1;
}
