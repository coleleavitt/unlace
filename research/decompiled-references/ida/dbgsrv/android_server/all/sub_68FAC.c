/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68FAC
// Address: 0x0000000000068FAC

//----- (0000000000068FAC) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68FAC(pthread_mutex_t *a1, char *a2)
{
  struct __pthread_internal_list *prev; // x9

  prev = a1->__list.__prev;
  if ( (char *)prev - a2 > 3 && (char *)prev - (a2 + 4) > 3 )
    return (pthread_mutex_t *)(*(unsigned int *)&a2[a1->__align]
                             | ((unsigned __int64)*(unsigned int *)&a2[a1->__align + 4] << 32));
  if ( !under_debugger )
    a1 = interr(276);
  __break(1u);
  return sub_69004(a1, a2);
}
// 69001: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
