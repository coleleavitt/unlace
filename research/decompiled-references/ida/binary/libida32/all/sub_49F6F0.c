__int64 __fastcall sub_49F6F0(unsigned int a1, __int64 a2, char a3)
{
  if ( qword_2CA1EF0 )
    qmutex_lock(qword_2CA1EF0);
  sub_49F640((__int64)&xmmword_2CA1E40, a1, a2, a3);
  if ( qword_2CA1EF0 )
    qmutex_unlock(qword_2CA1EF0);
  return 1;
}

