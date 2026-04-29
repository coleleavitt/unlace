__m128i *__fastcall sub_40B480(__int64 a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __m128i *v3; // rbx
  __m128i v4; // xmm3
  bool v5; // zf
  const char *v6; // rax
  __m128i v7; // xmm0

  v1 = operator new(0xEE0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_424B40);
  v3 = (__m128i *)v1;
  *(_DWORD *)(v1 + 16) = 0;
  *(__m128i *)(v1 + 64) = si128;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 96) = a1;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 144) = 0;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 200) = 0;
  *(_QWORD *)(v1 + 224) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 304) = 0;
  *(_QWORD *)(v1 + 328) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_OWORD *)(v1 + 48) = 0;
  *(_OWORD *)(v1 + 80) = 0;
  *(_OWORD *)(v1 + 128) = 0;
  *(_OWORD *)(v1 + 168) = 0;
  *(_OWORD *)(v1 + 208) = 0;
  *(_OWORD *)(v1 + 248) = 0;
  *(_OWORD *)(v1 + 288) = 0;
  *(_OWORD *)(v1 + 312) = 0;
  *(_OWORD *)(v1 + 336) = 0;
  *(_QWORD *)v1 = off_4E9AB8;
  v4 = _mm_load_si128((const __m128i *)&unk_424B50);
  *(_QWORD *)(v1 + 352) = &off_4E9A90;
  *(_QWORD *)(v1 + 360) = 0;
  *(_QWORD *)(v1 + 368) = v1;
  *(_QWORD *)(v1 + 3752) = 0;
  *(_QWORD *)(v1 + 3776) = 0xFFFFFFFF00000000LL;
  *(_BYTE *)(v1 + 3800) = 0;
  *(_QWORD *)(v1 + 8) = 3808;
  *(_OWORD *)(v1 + 376) = -1;
  *(_OWORD *)(v1 + 392) = -1;
  *(_OWORD *)(v1 + 408) = -1;
  *(_OWORD *)(v1 + 424) = -1;
  *(__m128i *)(v1 + 440) = v4;
  *(_OWORD *)(v1 + 456) = -1;
  *(_OWORD *)(v1 + 472) = -1;
  *(_OWORD *)(v1 + 488) = -1;
  *(_OWORD *)(v1 + 504) = -1;
  *(_OWORD *)(v1 + 520) = -1;
  *(_OWORD *)(v1 + 536) = -1;
  *(_OWORD *)(v1 + 552) = -1;
  *(_OWORD *)(v1 + 568) = -1;
  *(_OWORD *)(v1 + 584) = -1;
  *(_OWORD *)(v1 + 600) = -1;
  *(_OWORD *)(v1 + 616) = -1;
  *(_OWORD *)(v1 + 632) = -1;
  *(_OWORD *)(v1 + 648) = -1;
  *(_OWORD *)(v1 + 664) = -1;
  *(_OWORD *)(v1 + 680) = -1;
  *(_OWORD *)(v1 + 696) = -1;
  *(_OWORD *)(v1 + 3760) = 0;
  *(_OWORD *)(v1 + 3784) = 0;
  v5 = (unsigned __int8)getinf_flag(3, 4) == 0;
  v6 = "HEXX86";
  v7 = _mm_load_si128((const __m128i *)&xmmword_424B60);
  if ( !v5 )
    v6 = "HEXX64";
  v3[1].m128i_i32[0] = 0;
  v3[3].m128i_i32[0] = 790992;
  v3[1].m128i_i64[1] = (__int64)v6;
  v3[46].m128i_i32[1] = 0;
  v3[5] = v7;
  return v3;
}
