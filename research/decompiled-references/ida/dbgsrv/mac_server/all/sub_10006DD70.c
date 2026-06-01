/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006DD70
// Address: 0x000000010006DD70

//----- (000000010006DD70) ----------------------------------------------------
bool __fastcall sub_10006DD70(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v2; // rbx
  void *v3; // rax
  __int64 v4; // rcx

  v2 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v3 = *(void **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(a1 + 8, v3, v4 + 1, 8u);
    *(_QWORD *)(a1 + 8) = v3;
    v4 = *(_QWORD *)(a1 + 16);
  }
  *((_QWORD *)v3 + v4) = a2;
  ++*(_QWORD *)(a1 + 16);
  return qmutex_unlock(v2);
}
