/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D4B0
// Address: 0x000000000006D4B0

//----- (000000000006D4B0) ----------------------------------------------------
__int64 __fastcall sub_6D4B0(__int64 a1, unsigned __int64 a2)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rbx

  v2 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( *(_QWORD *)(a1 + 72) <= a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(284);
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  qmutex_unlock(v2);
  return v3;
}
// 158B40: using guessed type __int64 under_debugger;
