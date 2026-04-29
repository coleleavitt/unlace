__m128i *__fastcall sub_36ED70(__int64 a1)
{
  __m128i *result; // rax
  __m128i si128; // xmm0

  result = (__m128i *)operator new(0x80u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  result->m128i_i64[0] = a1;
  result[3].m128i_i64[0] = (__int64)result[2].m128i_i64;
  result[3].m128i_i64[1] = (__int64)result[2].m128i_i64;
  result->m128i_i64[1] = 0;
  result[1].m128i_i64[0] = 0;
  result[2].m128i_i32[0] = 0;
  result[2].m128i_i64[1] = 0;
  result[4].m128i_i64[0] = 0;
  result[5].m128i_i32[0] = 0;
  result[5].m128i_i64[1] = 0;
  result[6].m128i_i64[0] = (__int64)result[5].m128i_i64;
  result[6].m128i_i64[1] = (__int64)result[5].m128i_i64;
  result[7] = si128;
  return result;
}
