__int64 __fastcall sub_960700(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  __m128i si128; // xmm0
  __m128i v5; // xmm0
  double v7[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v7[0] = a3;
  *(_QWORD *)&v7[1] = a2;
  *(_WORD *)(a1 + 120) = 0;
  v3 = _mm_loadh_ps(v7);
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(__m128 *)a1 = v3;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383880);
  *(_QWORD *)(a1 + 168) = 0x400000000LL;
  *(__m128i *)(a1 + 96) = si128;
  v5 = _mm_load_si128((const __m128i *)&unk_2383B90);
  *(_QWORD *)(a1 + 208) = a1 + 224;
  *(__m128i *)(a1 + 224) = v5;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 80) = a1 + 112;
  return a1 + 112;
}

