__int64 __fastcall sub_3C27A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = a1 + 1360;
  *(__m128i *)(v2 + 172) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  return sub_4EE550(v2, a2, 1);
}

