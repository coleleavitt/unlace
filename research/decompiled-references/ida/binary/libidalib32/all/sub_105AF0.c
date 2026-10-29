__int64 sub_105AF0()
{
  __int64 result; // rax
  __m128i si128; // xmm1
  __m128i v2; // xmm1

  result = operator new(0x268u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2490);
  *(_QWORD *)(result + 16) = 0;
  *(__m128i *)(result + 280) = si128;
  *(_QWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 128) = -1;
  *(_DWORD *)(result + 144) = -1;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = -4294967268LL;
  *(_DWORD *)(result + 88) = -1;
  *(_QWORD *)(result + 208) = -1;
  *(_DWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 296) = -2;
  *(_QWORD *)(result + 304) = 0;
  *(_QWORD *)(result + 312) = -1;
  *(_QWORD *)(result + 336) = 0;
  *(_QWORD *)(result + 344) = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 56) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 112) = 0;
  *(_OWORD *)(result + 152) = 0;
  *(_OWORD *)(result + 168) = 0;
  *(_OWORD *)(result + 192) = 0;
  *(_OWORD *)(result + 224) = 0;
  *(_OWORD *)(result + 240) = 0;
  *(_OWORD *)(result + 256) = 0;
  *(_OWORD *)(result + 320) = 0;
  *(_OWORD *)(result + 352) = 0;
  v2 = _mm_load_si128((const __m128i *)&xmmword_1D24A0);
  *(_QWORD *)(result + 368) = 0;
  *(_QWORD *)(result + 424) = 1;
  *(_DWORD *)(result + 432) = -1;
  *(_QWORD *)(result + 440) = 0;
  *(_BYTE *)(result + 448) = 0;
  *(_DWORD *)(result + 488) = -1;
  *(_QWORD *)(result + 496) = -1;
  *(_QWORD *)(result + 504) = 0;
  *(_QWORD *)(result + 528) = 0;
  *(_QWORD *)(result + 560) = 0;
  *(_BYTE *)(result + 568) = 0;
  *(_QWORD *)(result + 576) = 0;
  *(_BYTE *)(result + 600) = 0;
  *(_QWORD *)(result + 604) = 0;
  *(_OWORD *)(result + 376) = 0;
  *(_OWORD *)(result + 392) = 0;
  *(_OWORD *)(result + 456) = 0;
  *(__m128i *)(result + 472) = v2;
  *(_OWORD *)(result + 512) = 0;
  *(_OWORD *)(result + 536) = 0;
  *(_OWORD *)(result + 584) = 0;
  return result;
}

