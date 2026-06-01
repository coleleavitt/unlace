_OWORD *__fastcall sub_451B40(__m128i *a1, unsigned __int64 a2)
{
  __m128i v2; // xmm1
  _OWORD *result; // rax

  v2 = _mm_loadl_epi64((const __m128i *)(a2 + 152));
  a1[2].m128i_i64[0] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)a2, v2);
  a1[1] = _mm_unpacklo_epi64((__m128i)(a2 + 168), v2);
  result = (_OWORD *)sub_186B270(0x80u);
  a1[2].m128i_i64[1] = (__int64)result;
  a1[3].m128i_i64[0] = 8;
  a1[3].m128i_i32[2] = 0;
  a1[4].m128i_i64[0] = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

