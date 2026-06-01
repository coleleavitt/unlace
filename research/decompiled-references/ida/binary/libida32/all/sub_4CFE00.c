__int64 __fastcall sub_4CFE00(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( qword_2CA2088 )
    qmutex_lock(qword_2CA2088);
  v4 = *((_QWORD *)sub_4CFBF0(a2, a3, 1) + 15);
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
  return v4;
}

