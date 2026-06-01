/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_add
// Address: 0x00000000000AE934

//----- (00000000000AE934) ----------------------------------------------------
pthread_mutex_t *__fastcall cliopts_t_add(pthread_mutex_t *result, __int128 *a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x19
  pthread_mutex_t *v6; // x21
  pthread_mutex_t *v7; // x8
  __int128 v8; // [xsp+0h] [xbp-60h]
  __int128 v9; // [xsp+10h] [xbp-50h]
  struct __pthread_internal_list *v10; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a3 )
  {
    v3 = *(&result->__align + 1);
    v4 = a3;
    v6 = result;
    do
    {
      v10 = *((struct __pthread_internal_list **)a2 + 4);
      v8 = *a2;
      v9 = a2[1];
      if ( *(&v6->__align + 2) >= (unsigned __int64)(v3 + 1) )
      {
        result = (pthread_mutex_t *)v6->__align;
      }
      else
      {
        result = (pthread_mutex_t *)qvector_reserve(v6, (void *)v6->__align, v3 + 1, 0x28u);
        v3 = *(&v6->__align + 1);
        v6->__align = (__int64)result;
      }
      v7 = &result[v3];
      --v4;
      v7->__list.__next = v10;
      *(_OWORD *)&v7->__lock = v8;
      *((_OWORD *)&v7->__align + 1) = v9;
      a2 = (__int128 *)((char *)a2 + 40);
      v3 = *(&v6->__align + 1) + 1;
      *(&v6->__align + 1) = v3;
    }
    while ( v4 );
  }
  return result;
}
