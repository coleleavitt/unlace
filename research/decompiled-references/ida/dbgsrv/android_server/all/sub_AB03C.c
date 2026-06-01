/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB03C
// Address: 0x00000000000AB03C

//----- (00000000000AB03C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_AB03C(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v2; // x19
  __int64 v5; // x8
  pthread_mutex_t *v6; // x0
  _QWORD *align; // x0

  v2 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (pthread_mutex_t *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(v5 + 1) )
  {
    align = (_QWORD *)v6->__align;
  }
  else
  {
    align = qvector_reserve(v6, (void *)v6->__align, v5 + 1, 8u);
    v5 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = align;
  }
  align[v5] = a2;
  ++*(_QWORD *)(a1 + 16);
  return qmutex_unlock(v2);
}
