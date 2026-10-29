/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_704F8
// Address: 0x000704F8

//----- (000704F8) --------------------------------------------------------
bool __fastcall sub_704F8(int a1, int a2)
{
  pthread_mutex_t *v4; // r4
  void **v5; // r0
  int v6; // r1
  _DWORD *v7; // r0

  v4 = *(pthread_mutex_t **)a1;
  qmutex_lock(*(pthread_mutex_t **)a1);
  v5 = (void **)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) >= (unsigned int)(v6 + 1) )
  {
    v7 = *v5;
  }
  else
  {
    v7 = qvector_reserve((int)v5, *v5, v6 + 1, 4u);
    *(_DWORD *)(a1 + 4) = v7;
    v6 = *(_DWORD *)(a1 + 8);
  }
  v7[v6] = a2;
  ++*(_DWORD *)(a1 + 8);
  return qmutex_unlock(v4);
}
