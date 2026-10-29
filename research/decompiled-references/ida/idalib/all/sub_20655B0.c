__int64 __fastcall sub_20655B0(__int64 a1)
{
  __m128i si128; // xmm0
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  __m128i v5; // xmm4
  __m128i v6; // xmm5
  __m128i v7; // xmm6

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v2 = _mm_load_si128((const __m128i *)&xmmword_2673CA0);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 32) = a1 + 56;
  v3 = _mm_load_si128((const __m128i *)&xmmword_2673CB0);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  v4 = _mm_load_si128((const __m128i *)&xmmword_2673C80);
  v5 = _mm_load_si128((const __m128i *)&xmmword_2673C90);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 112) = 0x30200000040LL;
  v6 = _mm_load_si128((const __m128i *)&xmmword_2673C70);
  *(_QWORD *)(a1 + 128) = a1 + 144;
  v7 = _mm_load_si128((const __m128i *)&xmmword_2673C50);
  *(_QWORD *)(a1 + 136) = 0x400000004LL;
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_QWORD *)(a1 + 184) = 0xA00000002LL;
  *(_QWORD *)(a1 + 272) = a1 + 288;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)(a1 + 19) = 0;
  *(_BYTE *)(a1 + 27) = 0;
  *(__m128i *)(a1 + 40) = si128;
  *(_DWORD *)(a1 + 76) = 6;
  *(__m128i *)(a1 + 80) = v2;
  *(__m128i *)(a1 + 96) = v3;
  *(_DWORD *)(a1 + 72) = 5;
  *(__m128i *)(a1 + 144) = v4;
  *(__m128i *)(a1 + 160) = v5;
  *(__m128i *)(a1 + 192) = v6;
  *(__m128i *)(a1 + 288) = v7;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 280) = 0x800000001LL;
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 456) = 0;
  *(_BYTE *)(a1 + 464) = 0;
  *(_WORD *)(a1 + 480) = 768;
  *(_QWORD *)(a1 + 488) = 0;
  return 768;
}
