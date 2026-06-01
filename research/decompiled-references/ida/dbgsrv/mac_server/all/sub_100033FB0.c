/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033FB0
// Address: 0x0000000100033FB0

//----- (0000000100033FB0) ----------------------------------------------------
__int64 __fastcall sub_100033FB0(__int64 a1, unsigned __int64 a2)
{
  pthread_mutex_t *v2; // rbx
  __int64 v3; // r14

  v2 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  if ( *(_QWORD *)(a1 + 72) <= a2 )
  {
    if ( under_debugger != 1 )
      interr(0x11Cu);
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  qmutex_unlock(v2);
  return v3;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
// 1000AE23D: using guessed type char under_debugger;
