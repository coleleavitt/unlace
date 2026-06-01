/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68D7C
// Address: 0x0000000000068D7C

//----- (0000000000068D7C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68D7C(pthread_mutex_t *a1, char *a2, void *src, signed __int64 n)
{
  if ( *(&a1->__align + 1) - (__int64)a2 >= n )
    return (pthread_mutex_t *)memcpy(&a2[a1->__align], src, n);
  if ( !under_debugger )
    a1 = interr(277);
  __break(1u);
  return sub_68DCC(a1, a2, src, n);
}
// 68DC9: variable 'a2' is possibly undefined
// 68DC9: variable 'src' is possibly undefined
// 68DC9: variable 'n' is possibly undefined
// 168DF0: using guessed type char under_debugger;
