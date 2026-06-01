__int64 __fastcall sub_771A90(__int64 a1, int a2)
{
  void *v2; // r12
  __int64 v3; // rbx

  v2 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 96) )
  {
    if ( !under_debugger )
      interr(288);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 88) + 56LL * a2 + 24;
  qmutex_unlock(v2);
  return v3;
}

