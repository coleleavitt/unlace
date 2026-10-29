__int64 __fastcall sub_13F3070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128i si128; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-20h] BYREF
  double v13[3]; // [rsp+8h] [rbp-18h] BYREF

  v12 = a3;
  *(_QWORD *)&v13[1] = a2;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v6 = _mm_loadh_ps((const double *)&v12);
  *(_QWORD *)&v13[0] = a5;
  *(_QWORD *)(a1 + 48) = 0x100000000LL;
  *(__m128 *)a1 = v6;
  v12 = a4;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 104) = 0x400000000LL;
  v7 = _mm_loadh_ps(v13);
  *(_QWORD *)(a1 + 144) = a1 + 160;
  *(__m128 *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_OWORD *)(a1 + 160) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 184) = 0x800000000LL;
  *(_QWORD *)(a1 + 304) = a1 + 320;
  *(__m128i *)(a1 + 264) = si128;
  *(_QWORD *)(a1 + 32) = a6;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 312) = 0x200000000LL;
  *(_DWORD *)(a1 + 336) = 0;
  v10 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  *(_QWORD *)(a1 + 344) = 0;
  *(__m128i *)(a1 + 352) = v10;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  v11 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
  *(_DWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 604) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(__m128i *)(a1 + 648) = v11;
  return 0x200000000LL;
}
