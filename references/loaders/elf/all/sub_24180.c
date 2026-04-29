__int64 __fastcall sub_24180(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm0
  __m128i v4; // xmm0

  sub_18E90(a1, a2, a3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BF70);
  *(_QWORD *)a1 = off_88C58;
  *(__m128i *)(a1 + 24) = si128;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6BF80);
  *(_WORD *)(a1 + 350) = 0x8000;
  *(__m128i *)(a1 + 40) = v4;
  *(_WORD *)(a1 + 346) = -32747;
  *(_QWORD *)(a1 + 336) = 0x1100000008LL;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  return 0x1100000008LL;
}
