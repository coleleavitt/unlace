__int64 __fastcall sub_4E7680(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( qword_2CCBF88 )
    qmutex_lock(qword_2CCBF88);
  v4 = *((_QWORD *)sub_4E7470(a2, a3, 1) + 15);
  if ( qword_2CCBF88 )
    qmutex_unlock(qword_2CCBF88);
  return v4;
}
