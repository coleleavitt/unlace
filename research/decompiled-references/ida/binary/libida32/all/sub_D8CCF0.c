__int64 __fastcall sub_D8CCF0(__int64 a1)
{
  const __m128i *v1; // rbp

  v1 = (const __m128i *)sub_DFDA20(a1, 16);
  *(__m128i *)sub_DFD980(a1, 16) = _mm_loadu_si128(v1);
  return 1;
}

