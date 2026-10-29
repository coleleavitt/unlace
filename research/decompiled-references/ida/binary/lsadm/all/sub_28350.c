void __fastcall sub_28350(__m128i *a1)
{
  __m128i si128; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_3E1C0);
  a1[1].m128i_i64[0] = 0;
  *a1 = si128;
}

