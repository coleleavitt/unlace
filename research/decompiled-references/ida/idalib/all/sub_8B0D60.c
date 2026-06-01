unsigned __int64 __fastcall sub_8B0D60(__int64 a1)
{
  __int64 v1; // rbp

  *(_BYTE *)(a1 + 536) = 1;
  sub_8ACD30(a1);
  v1 = *(_QWORD *)(a1 + 424);
  qmutex_lock(v1);
  sub_8AE0D0(a1, 1);
  qmutex_unlock(v1);
  return sub_8B0B50(a1);
}
