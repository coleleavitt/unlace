__int64 __fastcall sub_E21AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i si128; // xmm2
  __m128 v7; // xmm1
  __m128i v8; // xmm2
  double v10[4]; // [rsp+0h] [rbp-20h] BYREF

  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)&v10[0] = a4;
  *(_QWORD *)(a1 + 16) = off_2B4B858;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  *(_QWORD *)a1 = &off_2B4B7B8;
  v7 = _mm_loadh_ps(v10);
  *(_QWORD *)(a1 + 96) = 0x400000000LL;
  *(_QWORD *)(a1 + 136) = a1 + 152;
  *(_QWORD *)(a1 + 184) = a5;
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(__m128i *)(a1 + 152) = si128;
  *(__m128 *)(a1 + 168) = v7;
  sub_E1E820(a1 + 192, a1, a6, 0, 0, *(_DWORD *)(a6 + 28));
  v8 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 440) = a1 + 456;
  *(_QWORD *)(a1 + 448) = 0x300000000LL;
  *(_QWORD *)(a1 + 504) = a1 + 520;
  *(_QWORD *)(a1 + 512) = 0x600000000LL;
  *(_QWORD *)(a1 + 584) = a1 + 600;
  *(_QWORD *)(a1 + 400) = a1 + 192;
  *(_QWORD *)(a1 + 592) = 0x400000000LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_OWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_BYTE *)(a1 + 437) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 632) = a1 + 648;
  *(_QWORD *)(a1 + 640) = 0;
  *(__m128i *)(a1 + 648) = v8;
  return a1 + 648;
}
