__int64 __fastcall sub_ED6F60(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __m128 v4; // xmm0
  __m128i si128; // xmm0
  bool v6; // zf
  double v8[3]; // [rsp+0h] [rbp-18h] BYREF

  *(_QWORD *)&v8[0] = a3;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  *(_QWORD *)&v8[1] = a2;
  *(_QWORD *)(a1 + 64) = 0x1000000000LL;
  v3 = *(_BYTE *)(a1 + 200);
  v4 = _mm_loadh_ps(v8);
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128 *)a1 = v4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D00);
  *(_BYTE *)(a1 + 200) = v3 & 0xE0;
  *(__m128i *)(a1 + 24) = si128;
  *(__m128i *)(a1 + 40) = si128;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 17448) + 260LL) == 20;
  *(_BYTE *)(a1 + 202) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 200) = (32 * !v6) | v3 & 0xC0;
  *(_WORD *)(a1 + 200) &= 0xBFu;
  *(_QWORD *)(a1 + 232) = 1;
  *(_QWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = a1 + 344;
  *(_QWORD *)(a1 + 608) = a1 + 632;
  *(_QWORD *)(a1 + 768) = a1 + 784;
  *(_QWORD *)(a1 + 776) = 0x400000000LL;
  *(_QWORD *)(a1 + 328) = 32;
  *(_DWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 340) = 1;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 616) = 4;
  *(_DWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 628) = 1;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_DWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 816) = a1 + 832;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 856) = 0;
  *(_DWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = 0;
  *(_DWORD *)(a1 + 888) = 0;
  return a1 + 832;
}
