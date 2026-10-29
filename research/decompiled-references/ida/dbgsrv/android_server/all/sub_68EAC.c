/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68EAC
// Address: 0x0000000000068EAC

//----- (0000000000068EAC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68EAC(pthread_mutex_t *a1, char *a2, void *dest, signed __int64 n)
{
  if ( (char *)a1->__list.__prev - a2 >= n )
    return (pthread_mutex_t *)memcpy(dest, &a2[a1->__align], n);
  if ( !under_debugger )
    a1 = interr(276);
  __break(1u);
  return sub_68EF8(a1, a2);
}
// 68EF5: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
