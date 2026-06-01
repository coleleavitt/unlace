/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033D90
// Address: 0x0000000100033D90

//----- (0000000100033D90) ----------------------------------------------------
char **__fastcall sub_100033D90(char *__s2)
{
  __int64 v1; // r15
  char **i; // r14

  if ( !__s2 )
    return nullptr;
  v1 = qword_1000AC0E0;
  if ( !qword_1000AC0E0 )
    return nullptr;
  for ( i = off_1000AC0E8; strcmp(*i, __s2); i += 5 )
  {
    if ( !--v1 )
      return nullptr;
  }
  if ( !i[1] )
    return nullptr;
  return i;
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **;
