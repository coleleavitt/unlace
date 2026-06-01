__int64 __fastcall sub_3C7860(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = a1 + 1400;
  *(__m128i *)(v2 + 184) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)(v2 + 200) = -1;
  return sub_504700(v2, a2);
}
