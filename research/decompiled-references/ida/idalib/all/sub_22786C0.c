__int64 __fastcall sub_22786C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i si128; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_2BEBCC8;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v9 = (__int64 *)operator new(0x10u);
  sub_2270920(v9, a2, a3, a1 + 16, 0, a1 + 96);
  *(_QWORD *)(a1 + 80) = v9;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  v10 = std::_V2::system_category((std::_V2 *)v9);
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 176) = a1 + 192;
  *(_QWORD *)(a1 + 224) = a1 + 240;
  *(_QWORD *)(a1 + 272) = a1 + 288;
  *(_QWORD *)(a1 + 104) = v10;
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 368) = a1 + 384;
  *(_QWORD *)(a1 + 136) = 0x400000000LL;
  *(_QWORD *)(a1 + 232) = 0x400000000LL;
  *(_QWORD *)(a1 + 328) = 0x400000000LL;
  *(_QWORD *)(a1 + 416) = a1 + 432;
  *(_QWORD *)(a1 + 424) = 0x400000000LL;
  *(_QWORD *)(a1 + 520) = 0x400000000LL;
  *(__m128i *)(a1 + 192) = si128;
  *(_QWORD *)(a1 + 464) = a1 + 480;
  *(_QWORD *)(a1 + 560) = a1 + 576;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 600) = a1 + 616;
  *(_QWORD *)(a1 + 608) = 0x600000000LL;
  *(_OWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_DWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_WORD *)(a1 + 680) = 0;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 64) = a5;
    *(_QWORD *)(a1 + 72) = a6;
  }
  result = sub_2276B50((__int64)v9, a2, a1 + 528, v11, v12, v13);
  *(_QWORD *)(a1 + 592) = result;
  return result;
}
