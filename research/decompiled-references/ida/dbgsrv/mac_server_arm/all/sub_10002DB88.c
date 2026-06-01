/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DB88
// Address: 0x000000010002DB88

//----- (000000010002DB88) ----------------------------------------------------
char **__fastcall sub_10002DB88(char **__s2)
{
  __int64 v1; // x21
  const char *v2; // x19
  char **i; // x20

  if ( __s2 )
  {
    v1 = qword_10009CA00;
    if ( qword_10009CA00 )
    {
      v2 = (const char *)__s2;
      for ( i = off_10009CA08; strcmp(*i, v2); i += 5 )
      {
        if ( !--v1 )
          return nullptr;
      }
      if ( i[1] )
        return i;
      else
        return nullptr;
    }
    else
    {
      return nullptr;
    }
  }
  return __s2;
}
// 10009CA00: using guessed type __int64 qword_10009CA00;
// 10009CA08: using guessed type char **off_10009CA08;
