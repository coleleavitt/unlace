/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EF28
// Address: 0x000000010002EF28

//----- (000000010002EF28) ----------------------------------------------------
char **__fastcall sub_10002EF28(char **__s2)
{
  __int64 v1; // x21
  const char *v2; // x19
  char **i; // x20

  if ( __s2 )
  {
    v1 = qword_1000A4A00;
    if ( qword_1000A4A00 )
    {
      v2 = (const char *)__s2;
      for ( i = off_1000A4A08; strcmp(*i, v2); i += 5 )
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
// 1000A4A00: using guessed type __int64 qword_1000A4A00;
// 1000A4A08: using guessed type char **off_1000A4A08;
