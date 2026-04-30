void __fastcall sub_45A000(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rdi

  a2[1].m128i_i64[0] = 0;
  a2[1].m128i_i64[1] = -1;
  a2[2].m128i_i64[0] = 0;
  a2[2].m128i_i64[1] = 0;
  *a2 = 0;
  if ( a2 != a3 )
  {
    *a2 = _mm_loadu_si128(a3);
    a2[1] = _mm_loadu_si128(a3 + 1);
    a2[2].m128i_i32[0] = a3[2].m128i_i32[0];
    v3 = a3[2].m128i_i64[1];
    if ( v3 )
      a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
