/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BC9F4
// Address: 0x00000000000BC9F4

//----- (00000000000BC9F4) ----------------------------------------------------
char *__fastcall sub_BC9F4(unsigned __int8 *a1, char *s, unsigned int a3)
{
  int v6; // w8
  char *v7; // x0
  char *v8; // x0
  unsigned __int8 *v9; // x0
  char *result; // x0
  unsigned __int8 *v11; // x0
  char *v12; // x1

  if ( (a3 & 1) == 0 )
  {
    v6 = (unsigned __int8)*s;
    if ( (v6 == 47 || v6 == 42) && !s[1] )
      return (_BYTE *)(&dword_0 + 1);
  }
  v7 = strchr(s, 47);
  if ( (a3 & 1) != 0 || v7 )
  {
    if ( v7 && v7[1] )
    {
      if ( *a1 == 47 )
        v11 = a1 + 1;
      else
        v11 = a1;
      if ( *s == 47 )
        v12 = s + 1;
      else
        v12 = s;
      return (char *)sub_BCC9C(v11, (unsigned __int8 *)v12, a3);
    }
    else
    {
      if ( *a1 == 47 )
        ++a1;
      while ( *a1 != 46 || (a3 & 1) == 0 || *s == 46 )
      {
        if ( (sub_BCC9C(a1, (unsigned __int8 *)s, a3) & 1) != 0 )
          return (_BYTE *)(&dword_0 + 1);
        result = strchr((const char *)a1, 47);
        a1 = (unsigned __int8 *)(result + 1);
        if ( !result )
          return result;
      }
      return nullptr;
    }
  }
  else
  {
    v8 = strrchr((const char *)a1, 47);
    if ( v8 )
      v9 = (unsigned __int8 *)(v8 + 1);
    else
      v9 = a1;
    return (char *)sub_BCB0C(v9, (unsigned __int8 *)s);
  }
}
// 0: using guessed type int dword_0;
