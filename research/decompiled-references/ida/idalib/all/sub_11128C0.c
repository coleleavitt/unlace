__m128i *__fastcall sub_11128C0(__m128i *a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 i; // rdx

  if ( a1 != a2 )
  {
    sub_9EE8A0((__int64)a1, (__int64)a2);
    sub_1112390((__int64)a1[2].m128i_i64, (__int64)a2[2].m128i_i64);
    v2 = a1[2].m128i_i64[0];
    v3 = 96LL * a1[2].m128i_u32[2];
    a1[9] = _mm_loadu_si128(a2 + 9);
    for ( i = v2 + v3; v2 != i; v2 += 96 )
      *(_QWORD *)(v2 + 88) = a1;
  }
  return a1;
}
