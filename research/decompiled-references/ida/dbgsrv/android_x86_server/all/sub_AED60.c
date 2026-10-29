/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AED60
// Address: 0x000AED60

//----- (000AED60) --------------------------------------------------------
char __cdecl sub_AED60(char *a1, char *s, int a3)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // ecx
  char *v7; // ecx
  char *v8; // edx
  char *v9; // edi
  unsigned __int8 *v10; // edx
  char *v11; // eax

  if ( (a3 & 1) == 0 && (*s == 47 || *s == 42) && !s[1] )
    return 1;
  v3 = strchr(s, 47);
  if ( (a3 & 1) != 0 || v3 )
  {
    if ( v3 && v3[1] )
    {
      v7 = a1 + 1;
      if ( *a1 != 47 )
        v7 = a1;
      v8 = s + 1;
      if ( *s != 47 )
        v8 = s;
      return sub_AEFE0(v7, (unsigned __int8 *)v8, a3);
    }
    else
    {
      v9 = a1 + 1;
      if ( *a1 != 47 )
        v9 = a1;
      v10 = (unsigned __int8 *)s;
      do
      {
        if ( *v9 == 46 && (a3 & 1) != 0 && *v10 != 46 )
          break;
        if ( sub_AEFE0(v9, v10, a3) )
          return 1;
        v11 = strchr(v9, 47);
        v9 = v11 + 1;
        v10 = (unsigned __int8 *)s;
      }
      while ( v11 );
      return 0;
    }
  }
  else
  {
    v4 = strrchr(a1, 47);
    v5 = v4 + 1;
    if ( !v4 )
      v5 = a1;
    return sub_AEE60((unsigned __int8 *)s, v5, (int)&qword_13ACD8);
  }
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
