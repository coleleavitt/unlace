/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68DCC
// Address: 0x0000000000068DCC

//----- (0000000000068DCC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68DCC(pthread_mutex_t *result, char *a2, void *a3, signed __int64 a4)
{
  if ( *(&result->__align + 1) - (__int64)a2 <= 0 )
  {
    if ( !under_debugger )
      result = interr(277);
    __break(1u);
    return sub_68E08(result, a2, a3, a4);
  }
  else
  {
    a2[result->__align] = (char)a3;
  }
  return result;
}
// 68E05: variable 'a2' is possibly undefined
// 68E05: variable 'a3' is possibly undefined
// 68E05: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
