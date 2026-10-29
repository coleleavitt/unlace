__m128i *__fastcall sub_4F7790(__m128i *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __m128i v7; // xmm0

  v6 = sub_4F7580(a2, (__int64)a2, a3, a4, a5, a6);
  v7 = _mm_loadu_si128((const __m128i *)(v6 + 24));
  a1[1].m128i_i64[0] = *(_QWORD *)(v6 + 40);
  *a1 = v7;
  if ( v7.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v7.m128i_i64[0], 1u);
  return a1;
}
