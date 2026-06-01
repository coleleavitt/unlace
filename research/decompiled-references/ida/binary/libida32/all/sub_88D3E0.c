unsigned __int64 __fastcall sub_88D3E0(__int64 a1)
{
  __int64 v1; // rbp

  *(_BYTE *)(a1 + 536) = 1;
  sub_8893C0(a1);
  v1 = *(_QWORD *)(a1 + 424);
  qmutex_lock(v1);
  sub_88A750(a1, 1);
  qmutex_unlock(v1);
  return sub_88D1D0(a1);
}

