__m128i *__fastcall sub_879200(__int64 a1)
{
  __m128i *result; // rax

  result = (__m128i *)sub_186B270(0x20u);
  result[1].m128i_i64[0] = -1;
  result[1].m128i_i64[1] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = result;
  *result = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
  return result;
}

