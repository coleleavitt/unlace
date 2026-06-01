__int64 __fastcall sub_76D4A0(__int64 a1, unsigned __int64 a2)
{
  void *v2; // r12
  __int64 v3; // rbx

  v2 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  if ( a2 >= *(_QWORD *)(a1 + 72) )
  {
    if ( !under_debugger )
      interr(284);
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * a2);
  qmutex_unlock(v2);
  return v3;
}

