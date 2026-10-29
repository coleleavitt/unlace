__int64 __fastcall sub_13EEE0(__int64 a1)
{
  qmutex_lock();
  *(_QWORD *)(a1 + 320) = 0;
  return qmutex_unlock();
}

