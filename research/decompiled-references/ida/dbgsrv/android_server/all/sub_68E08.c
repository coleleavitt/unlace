/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68E08
// Address: 0x0000000000068E08

//----- (0000000000068E08) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68E08(pthread_mutex_t *result, char *a2, void *a3, signed __int64 a4)
{
  char *v4; // x8

  if ( *(&result->__align + 1) - (__int64)a2 <= 1 )
  {
    if ( !under_debugger )
      result = interr(277);
    __break(1u);
    if ( *(&result->__align + 1) - (__int64)a2 <= 3 )
    {
      if ( !under_debugger )
        result = interr(277);
      __break(1u);
      return sub_68EAC(result, a2, a3, a4);
    }
    else
    {
      v4 = &a2[result->__align];
      *(_WORD *)v4 = (_WORD)a3;
      v4[2] = BYTE2(a3);
      v4[3] = BYTE3(a3);
    }
  }
  else
  {
    *(_WORD *)&a2[result->__align] = (_WORD)a3;
  }
  return result;
}
// 68E58: variable 'a2' is possibly undefined
// 68E78: variable 'a3' is possibly undefined
// 68EA9: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
