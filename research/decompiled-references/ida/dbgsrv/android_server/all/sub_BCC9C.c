/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BCC9C
// Address: 0x00000000000BCC9C

//----- (00000000000BCC9C) ----------------------------------------------------
__int64 __fastcall sub_BCC9C(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *i; // x21
  int v7; // w8
  char *v8; // x22
  char *v9; // x0
  char *v10; // x8
  __int64 result; // x0
  _BYTE *v12; // x20
  const char *v13; // x21
  char *v14; // x8

  for ( i = a2; ; i = (unsigned __int8 *)(v10 + 1) )
  {
    v7 = *i;
    if ( v7 == 47 )
    {
      if ( !i[1] )
        return 1;
    }
    else if ( i <= a2 || *i )
    {
      if ( v7 == 42 && i[1] == 42 && (i == a2 || *(i - 1) == 47) )
      {
        if ( !i[2] )
          return 1;
        if ( i[2] == 47 )
        {
          v12 = i + 3;
          if ( *a1 == 47 )
            v13 = (const char *)(a1 + 1);
          else
            v13 = (const char *)a1;
          while ( *v13 != 46 || (a3 & 1) == 0 || *v12 == 46 )
          {
            if ( (sub_BCC9C(v13, v12, a3) & 1) != 0 )
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
    if ( *a1 == 46 && (a3 & 1) != 0 && v7 != 46 || !sub_BCB0C(a1, i) )
      return 0;
    v8 = strchr((const char *)a1, 47);
    v9 = strchr((const char *)i, 47);
    if ( !((unsigned __int64)v8 | (unsigned __int64)v9) )
      break;
    v10 = v9;
    result = 0;
    if ( !v8 || !v10 )
      return result;
    a1 = (unsigned __int8 *)(v8 + 1);
  }
  return 1;
}
