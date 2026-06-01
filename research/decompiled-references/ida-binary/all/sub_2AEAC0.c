__int64 __fastcall sub_2AEAC0(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rdi

  if ( a2 == a3 )
  {
    v5 = (_DWORD *)a2[2].m128i_i64[1];
  }
  else
  {
    v3 = a2[2].m128i_i64[1];
    if ( v3 )
    {
      qfree(v3, a2->m128i_i8);
      a2[2].m128i_i64[1] = 0;
    }
    *a2 = _mm_loadu_si128(a3);
    a2[1] = _mm_loadu_si128(a3 + 1);
    a2[2].m128i_i32[0] = a3[2].m128i_i32[0];
    v5 = (_DWORD *)a3[2].m128i_i64[1];
    if ( v5 )
    {
      a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
      v5 = (_DWORD *)a3[2].m128i_i64[1];
    }
  }
  a2[1].m128i_i32[2] = v5[3];
  a2[1].m128i_i16[7] = v5[2];
  return 1;
}
