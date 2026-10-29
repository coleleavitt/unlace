/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032250
// Address: 0x0000000100032250

//----- (0000000100032250) ----------------------------------------------------
bool __fastcall sub_100032250(__int64 a1, unsigned int a2)
{
  pthread_mutex_t *v2; // rbx
  __int64 v3; // rcx

  v2 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v3 = *(_QWORD *)(a1 + 56);
  if ( !_bittest64(&v3, a2) )
  {
    if ( under_debugger != 1 )
      interr(0x5A4u);
    BUG();
  }
  *(_QWORD *)(a1 + 56) = ~(1LL << a2) & v3;
  return qmutex_unlock(v2);
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
