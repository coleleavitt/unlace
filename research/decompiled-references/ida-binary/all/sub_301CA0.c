__int64 __fastcall IDAApplication__::vfunc_27(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 64);
  qmutex_lock(v1);
  *(_QWORD *)(a1 + 696) = 0;
  return qmutex_unlock(v1);
}
