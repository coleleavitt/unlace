__m128i *__fastcall sub_2FEAD0(__int64 a1, __int64 a2, __int32 a3)
{
  __m128i *result; // rax
  __m128i si128; // xmm0

  result = (__m128i *)operator new(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  result->m128i_i32[2] = a3;
  result->m128i_i32[3] = -1;
  result[2].m128i_i64[0] = a2;
  result->m128i_i64[0] = (__int64)desktops_diff_source_t___vtable;
  result[1] = si128;
  return result;
}
