__int64 __fastcall sha256_init(__m128i *a1)
{
  __m128i si128; // xmm0

  *a1 = _mm_load_si128((const __m128i *)&xmmword_2384860);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384870);
  a1[2].m128i_i64[0] = 0x5BE0CD191F83D9ABLL;
  a1[1] = si128;
  return 0x5BE0CD191F83D9ABLL;
}

