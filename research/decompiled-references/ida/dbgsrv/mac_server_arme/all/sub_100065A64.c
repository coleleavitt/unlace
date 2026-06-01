/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065A64
// Address: 0x0000000100065A64

//----- (0000000100065A64) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_100065A64(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v4; // x19
  _QWORD *v5; // x1
  __int64 v6; // x8

  v4 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve((_QWORD *)(a1 + 8), v5, v6 + 1, 8u);
    *(_QWORD *)(a1 + 8) = v5;
    v6 = *(_QWORD *)(a1 + 16);
  }
  v5[v6] = a2;
  ++*(_QWORD *)(a1 + 16);
  return qmutex_unlock(v4);
}
