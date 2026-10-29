void __fastcall sub_4CFF00(__int64 a1)
{
  if ( qword_2CA2088 )
    qmutex_lock(qword_2CA2088);
  sub_4CFE60(a1);
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
}

