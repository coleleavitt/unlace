__int64 __fastcall sub_4B48E0(unsigned int a1, unsigned int a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  if ( qword_2CCBDF0 )
    qmutex_lock(qword_2CCBDF0);
  v4 = sub_4B4650((__int64)&xmmword_2CCBD40, a1, a2, a3);
  v5 = sub_4B4850((__int64)&xmmword_2CCBD40, a1, v4, a2, a3);
  if ( qword_2CCBDF0 )
    qmutex_unlock(qword_2CCBDF0);
  return v5;
}
