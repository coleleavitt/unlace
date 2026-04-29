__int64 __fastcall sub_3EE120(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0
  __m128i si128; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0

  result = operator new(0x268u);
  *(_QWORD *)(result + 96) = a1;
  *(_QWORD *)result = off_4BFAA0;
  *(_OWORD *)(result + 352) = -1;
  *(_OWORD *)(result + 368) = -1;
  *(_OWORD *)(result + 384) = -1;
  *(_OWORD *)(result + 400) = -1;
  *(_OWORD *)(result + 416) = -1;
  *(_OWORD *)(result + 432) = -1;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 184) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 240) = 0;
  *(_QWORD *)(result + 264) = 0;
  *(_QWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 304) = 0;
  *(_QWORD *)(result + 328) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(_OWORD *)(result + 168) = 0;
  *(_OWORD *)(result + 208) = 0;
  *(_OWORD *)(result + 248) = 0;
  *(_OWORD *)(result + 288) = 0;
  *(_OWORD *)(result + 312) = 0;
  *(_OWORD *)(result + 336) = 0;
  *(_OWORD *)(result + 448) = -1;
  *(_QWORD *)(result + 528) = result + 352;
  *(_QWORD *)(result + 536) = result + 368;
  *(_QWORD *)(result + 544) = result + 372;
  *(_QWORD *)(result + 552) = result + 472;
  *(_QWORD *)(result + 560) = result + 476;
  *(_OWORD *)(result + 464) = -1;
  *(_OWORD *)(result + 480) = -1;
  v2 = _mm_loadl_epi64((const __m128i *)&off_4BD3C8);
  *(_QWORD *)(result + 512) = &unk_40DDC0;
  *(_QWORD *)(result + 40) = &unk_3F5793;
  *(__m128i *)(result + 24) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)"sp");
  si128 = _mm_load_si128((const __m128i *)&xmmword_400490);
  *(_QWORD *)(result + 496) = -1;
  *(__m128i *)(result + 48) = si128;
  v4 = _mm_load_si128((const __m128i *)&xmmword_4004A0);
  *(_DWORD *)(result + 504) = -1;
  *(__m128i *)(result + 64) = v4;
  v5 = _mm_load_si128((const __m128i *)&xmmword_4004B0);
  *(_DWORD *)(result + 520) = 6;
  *(_DWORD *)(result + 568) = 0;
  *(_QWORD *)(result + 576) = 0;
  *(_QWORD *)(result + 600) = off_4BD2F8;
  *(_QWORD *)(result + 608) = result;
  *(_QWORD *)(result + 8) = 616;
  *(_DWORD *)(result + 16) = 55;
  *(_OWORD *)(result + 584) = 0;
  *(__m128i *)(result + 80) = v5;
  return result;
}
