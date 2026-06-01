__m128i *__fastcall sub_1CE9C0(__m128i *a1, const __m128i *a2, double a3, __m128 a4)
{
  __m128 v4; // xmm0
  __int64 v5; // rax

  v4 = (__m128)_mm_loadu_si128(a2);
  v5 = a2[1].m128i_i64[0];
  if ( v5 && *(_BYTE *)(_mm_movehl_ps(a4, v4).m128_u64[0] + 2 * v5 - 2) != 92 )
  {
    a1[1].m128i_i64[0] = v5;
    *a1 = (__m128i)v4;
    if ( v4.m128_u64[0] )
      _InterlockedAdd((volatile signed __int32 *)v4.m128_u64[0], 1u);
    QT::QString::append(a1, 92);
    return a1;
  }
  else
  {
    a1[1].m128i_i64[0] = v5;
    *a1 = (__m128i)v4;
    if ( v4.m128_u64[0] )
      _InterlockedAdd((volatile signed __int32 *)v4.m128_u64[0], 1u);
    return a1;
  }
}
