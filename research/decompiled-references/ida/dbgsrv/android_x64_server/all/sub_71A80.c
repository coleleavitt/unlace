/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71A80
// Address: 0x0000000000071A80

//----- (0000000000071A80) ----------------------------------------------------
__int64 __fastcall sub_71A80(__int64 a1, int a2)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rbx

  v2 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( *(_QWORD *)(a1 + 96) <= (unsigned __int64)a2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(288);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 88);
  qmutex_unlock(v2);
  return v3 + 56LL * a2 + 24;
}
// 158B40: using guessed type __int64 under_debugger;
