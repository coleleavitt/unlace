__int64 sub_17B520()
{
  __int64 result; // rax
  __m128i si128; // xmm1
  __m128i v2; // xmm1

  result = operator new(0x2D0u);
  *(_OWORD *)(result + 88) = -1;
  *(_OWORD *)(result + 312) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC340);
  *(_QWORD *)(result + 16) = 0;
  *(__m128i *)(result + 368) = si128;
  *(_QWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 136) = -1;
  *(_DWORD *)(result + 152) = -1;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 80) = 28;
  *(_QWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 224) = -1;
  *(_QWORD *)(result + 264) = 0;
  *(_QWORD *)(result + 288) = 0;
  *(_QWORD *)(result + 328) = 0;
  *(_BYTE *)(result + 336) = 0;
  *(_DWORD *)(result + 360) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 104) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 160) = 0;
  *(_OWORD *)(result + 176) = 0;
  *(_OWORD *)(result + 200) = 0;
  *(_OWORD *)(result + 232) = 0;
  *(_OWORD *)(result + 248) = 0;
  *(_OWORD *)(result + 272) = 0;
  *(_OWORD *)(result + 296) = 0;
  *(_OWORD *)(result + 344) = 0;
  *(_QWORD *)(result + 384) = -2;
  v2 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_QWORD *)(result + 392) = 0;
  *(_QWORD *)(result + 400) = -1;
  *(_QWORD *)(result + 424) = 0;
  *(_QWORD *)(result + 432) = 0;
  *(_QWORD *)(result + 456) = 0;
  *(_QWORD *)(result + 528) = 1;
  *(_DWORD *)(result + 536) = -1;
  *(_QWORD *)(result + 544) = 0;
  *(_BYTE *)(result + 552) = 0;
  *(_DWORD *)(result + 592) = -1;
  *(_QWORD *)(result + 600) = -1;
  *(_QWORD *)(result + 608) = 0;
  *(_QWORD *)(result + 632) = 0;
  *(_QWORD *)(result + 664) = 0;
  *(_BYTE *)(result + 672) = 0;
  *(_QWORD *)(result + 680) = 0;
  *(_BYTE *)(result + 704) = 0;
  *(_QWORD *)(result + 708) = 0;
  *(_OWORD *)(result + 408) = 0;
  *(_OWORD *)(result + 440) = 0;
  *(_OWORD *)(result + 464) = 0;
  *(_OWORD *)(result + 480) = 0;
  *(_OWORD *)(result + 560) = 0;
  *(__m128i *)(result + 576) = v2;
  *(_OWORD *)(result + 616) = 0;
  *(_OWORD *)(result + 640) = 0;
  *(_OWORD *)(result + 688) = 0;
  return result;
}
