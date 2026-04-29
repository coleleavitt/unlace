const char *__fastcall sub_1C3F0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v7; // xmm0

  *(_QWORD *)(a1 + 8) = a2;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEC0);
  *(_WORD *)(a1 + 348) = 0x8000;
  *(__m128i *)(a1 + 356) = si128;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6BED0);
  *(_QWORD *)a1 = off_884D8;
  *(__m128i *)(a1 + 24) = v4;
  v5 = _mm_load_si128((const __m128i *)&xmmword_6BF00);
  *(_QWORD *)(a1 + 280) = ".stab";
  *(__m128i *)(a1 + 40) = v5;
  v7 = _mm_load_si128((const __m128i *)&xmmword_6BF10);
  *(_QWORD *)(a1 + 16) = a3;
  *(__m128i *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_BYTE *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 344) = -1073479678;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 388) = -1;
  *(_QWORD *)(a1 + 396) = 0x8000;
  *(_BYTE *)(a1 + 404) = 0;
  *(_QWORD *)(a1 + 72) = 21;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 288) = ".opd";
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  return ".opd";
}
