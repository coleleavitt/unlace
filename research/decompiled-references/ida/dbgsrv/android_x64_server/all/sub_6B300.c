/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B300
// Address: 0x000000000006B300

//----- (000000000006B300) ----------------------------------------------------
bool __fastcall sub_6B300(__int64 a1, unsigned int a2)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rcx

  v2 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v3 = *(_QWORD *)(a1 + 56);
  if ( !_bittest64(&v3, a2) )
  {
    if ( !(_BYTE)under_debugger )
      interr(1444);
    BUG();
  }
  *(_QWORD *)(a1 + 56) = ~(1LL << a2) & v3;
  return qmutex_unlock(v2);
}
// 158B40: using guessed type __int64 under_debugger;
