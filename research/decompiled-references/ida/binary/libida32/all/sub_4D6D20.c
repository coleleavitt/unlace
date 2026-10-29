__int64 __fastcall sub_4D6D20(__int64 a1, const char *a2, unsigned __int8 a3, char a4, __m128 a5, __m128 a6)
{
  __int64 **v7; // rbp
  __int64 **v8; // rax
  __int64 **v9; // rbx

  if ( a1 )
    return sub_4D6790(a1, a2, a3, a4, a5, a6);
  if ( qword_2CA2088 && (qmutex_lock(qword_2CA2088), qword_2CA2088) )
  {
    qmutex_lock(qword_2CA2088);
    if ( qword_2CA2078 )
      v7 = *(__int64 ***)qword_2CA2078;
    else
      v7 = (__int64 **)qword_2CA2080;
    if ( qword_2CA2088 )
      qmutex_unlock(qword_2CA2088);
  }
  else if ( qword_2CA2078 )
  {
    v7 = *(__int64 ***)qword_2CA2078;
  }
  else
  {
    v7 = (__int64 **)qword_2CA2080;
  }
  v8 = sub_4CDC20(v7, a2);
  v9 = v8;
  if ( v8 )
    v9 = (__int64 **)v8[6];
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
  return (__int64)v9;
}

