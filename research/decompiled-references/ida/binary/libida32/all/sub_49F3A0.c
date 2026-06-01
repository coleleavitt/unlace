__int64 __fastcall sub_49F3A0(unsigned int a1, unsigned int a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  if ( qword_2CA1EF0 )
    qmutex_lock(qword_2CA1EF0);
  v4 = sub_49F110((__int64)&xmmword_2CA1E40, a1, a2, a3);
  v5 = sub_49F310((__int64)&xmmword_2CA1E40, a1, v4, a2, a3);
  if ( qword_2CA1EF0 )
    qmutex_unlock(qword_2CA1EF0);
  return v5;
}

