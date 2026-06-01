_QWORD *__fastcall sub_FFD070(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128 v4; // xmm0
  __m128i si128; // xmm0
  __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *result; // rax
  double v9[5]; // [rsp+0h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 40) = a1 + 56;
  *(_QWORD *)&v9[0] = a3;
  *(_QWORD *)&v9[1] = a2;
  *(_QWORD *)(a1 + 88) = a1 + 104;
  v4 = _mm_loadh_ps(v9);
  *(_QWORD *)(a1 + 184) = a1 + 200;
  *(__m128 *)(a1 + 8) = v4;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  *(_QWORD *)(a1 + 200) = a1 + 216;
  *(_QWORD *)(a1 + 208) = 0xC00000000LL;
  *(_OWORD *)(a1 + 24) = 0;
  *(__m128i *)(a1 + 104) = si128;
  *(_BYTE *)(a1 + 145) = a4;
  *(_QWORD *)(a1 + 48) = 0x400000000LL;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 1;
  *(_BYTE *)(a1 + 146) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = a1 + 288;
  *(_QWORD *)(a1 + 280) = 0;
  v6 = operator new(0x60u);
  v7 = _mm_load_si128((const __m128i *)&unk_2383B90);
  *(_OWORD *)v6 = 0;
  *(_QWORD *)(v6 + 16) = v6 + 32;
  *(_QWORD *)(v6 + 24) = 0x400000000LL;
  *(_QWORD *)(v6 + 64) = v6 + 80;
  *(__m128i *)(v6 + 80) = v7;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(a1 + 288) = v6 | 4;
  *(_QWORD *)(a1 + 296) = a1 + 312;
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_QWORD *)(a1 + 328) = 0x600000000LL;
  *(_QWORD *)(a1 + 400) = 0x600000000LL;
  *(_QWORD *)(a1 + 392) = a1 + 408;
  *(_QWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_DWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 596) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 656) = a1 + 672;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 664) = 0x200000000LL;
  result = sub_FFCC90(a1);
  *(_QWORD *)(a2 + 64) = a1;
  return result;
}

