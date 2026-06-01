__int64 __fastcall sub_301C70(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 80);
  qmutex_lock(v1);
  *(_QWORD *)(a1 + 712) = 0;
  return qmutex_unlock(v1);
}
