/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68EF8
// Address: 0x0000000000068EF8

//----- (0000000000068EF8) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_68EF8(pthread_mutex_t *a1, char *a2)
{
  if ( (char *)a1->__list.__prev - a2 > 0 )
    return (pthread_mutex_t *)(unsigned __int8)a2[a1->__align];
  if ( !under_debugger )
    a1 = interr(276);
  __break(1u);
  return sub_68F34(a1, a2);
}
// 68F31: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
