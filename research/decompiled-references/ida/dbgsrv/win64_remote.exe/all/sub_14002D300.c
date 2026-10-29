/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D300
// Address: 0x000000014002D300

//----- (000000014002D300) ----------------------------------------------------
const char **__fastcall sub_14002D300(char *Str2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  const char **i; // rbx

  if ( !Str2 )
    return nullptr;
  v2 = qword_1400C6060;
  v3 = 0;
  if ( !qword_1400C6060 )
    return nullptr;
  for ( i = (const char **)off_1400C6068; strcmp(*i, Str2); i += 5 )
  {
    if ( ++v3 >= v2 )
      return nullptr;
  }
  if ( i && i[1] )
    return i;
  else
    return nullptr;
}
// 1400C6060: using guessed type __int64 qword_1400C6060;
