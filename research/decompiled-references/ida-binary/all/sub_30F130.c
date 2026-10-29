__m128i *__fastcall sub_30F130(__m128i *a1, __int64 a2)
{
  __int64 v2; // rcx
  __m128i *result; // rax
  __m128i v4; // xmm0

  v2 = *(_QWORD *)(a2 + 352);
  result = a1;
  v4 = _mm_loadu_si128((const __m128i *)(v2 + 72));
  a1[1].m128i_i64[0] = *(_QWORD *)(v2 + 88);
  *a1 = v4;
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  return result;
}
