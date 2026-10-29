__int64 __fastcall sub_13BF8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rdi
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm1

  *(_QWORD *)a1 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 8) = 0;
  v12 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a4;
  v13 = *(_QWORD *)(a3 + 16);
  *(__m128i *)(a1 + 128) = si128;
  *(_QWORD *)(a1 + 40) = v13;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(_QWORD *)(a1 + 208) = a1 + 224;
  *(_OWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0x400000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(__m128i *)(a1 + 224) = v12;
  v14 = _mm_load_si128((const __m128i *)&xmmword_23AA470);
  *(_QWORD *)(a1 + 272) = a1 + 288;
  *(_QWORD *)(a1 + 304) = a1 + 320;
  *(_QWORD *)(a1 + 400) = a1 + 416;
  v15 = a1 + 464;
  v16 = a1 + 480;
  *(_QWORD *)(v16 - 72) = 0x400000000LL;
  *(_QWORD *)(v16 - 32) = v15;
  *(_DWORD *)(v16 - 240) = 0;
  *(_QWORD *)(v16 - 216) = 0;
  *(_QWORD *)(v16 - 200) = 0;
  *(_BYTE *)(v16 - 192) = 0;
  *(_QWORD *)(v16 - 168) = 0;
  *(_BYTE *)(v16 - 160) = 0;
  *(_QWORD *)(v16 - 144) = 0;
  *(_QWORD *)(v16 - 136) = 0;
  *(_QWORD *)(v16 - 128) = 0;
  *(_QWORD *)(v16 - 120) = 0;
  *(_QWORD *)(v16 - 24) = 0;
  *(__m128i *)(v16 - 112) = v14;
  *(_OWORD *)(v16 - 232) = 0;
  *(_OWORD *)(v16 - 96) = 0;
  *(__m128i *)(v16 - 16) = v12;
  sub_2244B40(v16, 64, 24);
  *(_QWORD *)(a1 + 528) = 0x400000000LL;
  v17 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 520) = a1 + 536;
  *(_QWORD *)(a1 + 568) = a1 + 584;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_OWORD *)(a1 + 504) = 0;
  *(__m128i *)(a1 + 584) = v17;
  sub_13F3070(a1 + 632, a3, a4, a5, a6, a1);
  v18 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v19 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 1432) = a1 + 1448;
  *(_QWORD *)(a1 + 1440) = 0x400000000LL;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_QWORD *)(a1 + 1304) = 0;
  *(_DWORD *)(a1 + 1312) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_DWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1344) = 0;
  *(_QWORD *)(a1 + 1352) = 0;
  *(_DWORD *)(a1 + 1360) = 0;
  *(_QWORD *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  *(_DWORD *)(a1 + 1384) = 0;
  *(_QWORD *)(a1 + 1392) = 0;
  *(__m128i *)(a1 + 1400) = v18;
  *(_OWORD *)(a1 + 1416) = 0;
  *(_QWORD *)(a1 + 1480) = a1 + 1496;
  *(_QWORD *)(a1 + 1488) = 0;
  *(__m128i *)(a1 + 1496) = v19;
  *(_OWORD *)(a1 + 1512) = 0;
  return a1 + 1496;
}
