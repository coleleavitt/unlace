__int64 __fastcall sub_546990(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __m128i v3; // xmm0
  __int64 result; // rax

  v3 = _mm_loadu_si128(a3);
  result = v3.m128i_i64[0];
  a2[1].m128i_i64[0] = a3[1].m128i_i64[0];
  *a2 = v3;
  if ( v3.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v3.m128i_i64[0], 1u);
  return result;
}
