void __fastcall sub_2231D80(__m128i *a1)
{
  __m128i si128; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8890);
  a1[1].m128i_i64[0] = 0;
  *a1 = si128;
}
