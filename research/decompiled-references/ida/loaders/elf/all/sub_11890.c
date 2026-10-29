__int64 __fastcall sub_11890(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm0

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = off_87758;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BE60);
  *(_QWORD *)(a1 + 8) = a2;
  *(__m128i *)(a1 + 24) = si128;
  v5 = _mm_load_si128((const __m128i *)&xmmword_6BE70);
  *(_QWORD *)(a1 + 280) = 0;
  *(__m128i *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 344) = -1073479678;
  *(_WORD *)(a1 + 350) = 0x8000;
  *(_QWORD *)(a1 + 56) = 0xA00000001LL;
  *(_QWORD *)(a1 + 64) = 0;
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
  return 4294934528LL;
}

