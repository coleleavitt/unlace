__int64 __fastcall sub_76BE90(__int64 a1, char a2)
{
  void *v2; // rbp
  __int64 v3; // rdx

  v2 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v3 = *(_QWORD *)(a1 + 56);
  if ( ((1LL << a2) & v3) == 0 )
  {
    if ( !under_debugger )
      interr(1444);
    BUG();
  }
  *(_QWORD *)(a1 + 56) = v3 & ~(1LL << a2);
  return qmutex_unlock(v2);
}

