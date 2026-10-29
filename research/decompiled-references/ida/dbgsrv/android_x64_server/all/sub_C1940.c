/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1940
// Address: 0x00000000000C1940

//----- (00000000000C1940) ----------------------------------------------------
char __fastcall sub_C1940(char *s, char *a2, char a3)
{
  int v5; // r12d
  char *i; // rbx
  char v7; // al
  char v8; // cl
  char *v9; // rbp
  char *v10; // rbx
  char result; // al
  _BYTE *v12; // rbx
  char *v13; // r15
  char *v14; // rcx

  v5 = a3 & 1;
  for ( i = a2; ; i = v10 + 1 )
  {
    v7 = *i;
    if ( *i == 47 )
    {
      if ( !i[1] )
        return 1;
    }
    else if ( i <= a2 || v7 )
    {
      if ( v7 == 42 && i[1] == 42 && (i == a2 || *(i - 1) == 47) )
      {
        v8 = i[2];
        if ( !v8 )
          return 1;
        if ( v8 == 47 )
        {
          v12 = i + 3;
          v13 = s + 1;
          if ( *s != 47 )
            v13 = s;
          while ( *v13 != 46 || (a3 & 1) == 0 || *v12 == 46 )
          {
            if ( (unsigned __int8)sub_C1940(v13) )
              return 1;
            v14 = strchr(v13, 47);
            result = 0;
            v13 = v14 + 1;
            if ( !v14 )
              return result;
          }
          return 0;
        }
      }
    }
    else if ( *(i - 1) == 47 )
    {
      return 1;
    }
    if ( *s == 46 && v5 && v7 != 46 || !sub_C17D0(s, i) )
      return 0;
    v9 = strchr(s, 47);
    v10 = strchr(i, 47);
    if ( !((unsigned __int64)v10 | (unsigned __int64)v9) )
      break;
    result = 0;
    if ( !v9 || !v10 )
      return result;
    s = v9 + 1;
  }
  return 1;
}
