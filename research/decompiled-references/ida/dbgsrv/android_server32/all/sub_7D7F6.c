/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D7F6
// Address: 0x0007D7F6

//----- (0007D7F6) --------------------------------------------------------
int __fastcall sub_7D7F6(char *a1, char *s, int a3)
{
  int result; // r0
  int v7; // r5
  int v8; // r1
  char *v9; // r0
  char *v10; // r0
  unsigned __int8 *v11; // r0
  char *v12; // r1
  int v13; // r0
  char *v14; // r1
  unsigned __int8 *v15; // r7
  char *v16; // r1

  result = 1;
  v7 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = strchr(s, 47);
  }
  else
  {
    v8 = (unsigned __int8)*s;
    if ( (v8 == 47 || v8 == 42) && !s[1] )
      return result;
    v9 = strchr(s, 47);
    if ( !v9 )
    {
      v10 = strrchr(a1, 47);
      if ( v10 )
        a1 = v10 + 1;
      return sub_7D8C4((unsigned __int8 *)a1, (unsigned __int8 *)s);
    }
  }
  if ( v9 && v9[1] )
  {
    v11 = (unsigned __int8 *)(a1 + 1);
    if ( *a1 != 47 )
      v11 = (unsigned __int8 *)a1;
    v12 = s + 1;
    if ( *s != 47 )
      v12 = s;
    return sub_7DA00(v11, (unsigned __int8 *)v12, a3);
  }
  else
  {
    v13 = (unsigned __int8)*a1;
    v14 = a1;
    v15 = (unsigned __int8 *)(a1 + 1);
    if ( v13 != 47 )
      v15 = (unsigned __int8 *)v14;
    do
    {
      if ( *v15 == 46 )
      {
        result = 0;
        if ( v7 )
        {
          if ( *s != 46 )
            break;
        }
      }
      if ( sub_7DA00(v15, (unsigned __int8 *)s, a3) )
        return 1;
      v16 = strchr((const char *)v15, 47);
      v15 = (unsigned __int8 *)(v16 + 1);
      result = 0;
    }
    while ( v16 );
  }
  return result;
}
// 7D826: conditional instruction was optimized away because r5.4==0
