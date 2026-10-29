__int64 sub_105BD0()
{
  __int64 result; // rax
  __m128i si128; // xmm1
  __m128i v2; // xmm1

  result = operator new(0x250u);
  *(_OWORD *)(result + 88) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D34B0);
  *(_QWORD *)(result + 16) = 0;
  *(__m128i *)(result + 288) = si128;
  *(_QWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 136) = -1;
  *(_DWORD *)(result + 152) = -1;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 80) = 28;
  *(_QWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 224) = -1;
  *(_DWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 304) = -2;
  *(_QWORD *)(result + 312) = 0;
  *(_QWORD *)(result + 320) = -1;
  *(_QWORD *)(result + 344) = 0;
  *(_QWORD *)(result + 352) = 0;
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
  *(_OWORD *)(result + 264) = 0;
  *(_OWORD *)(result + 328) = 0;
  *(_OWORD *)(result + 360) = 0;
  *(_QWORD *)(result + 376) = 0;
  v2 = _mm_load_si128((const __m128i *)&xmmword_1D34C0);
  *(_QWORD *)(result + 448) = 1;
  *(_DWORD *)(result + 456) = -1;
  *(_QWORD *)(result + 464) = 0;
  *(_BYTE *)(result + 472) = 0;
  *(_DWORD *)(result + 512) = -1;
  *(_QWORD *)(result + 520) = -1;
  *(_QWORD *)(result + 528) = 0;
  *(_QWORD *)(result + 552) = 0;
  *(_QWORD *)(result + 584) = 0;
  *(_OWORD *)(result + 384) = 0;
  *(_OWORD *)(result + 400) = 0;
  *(_OWORD *)(result + 480) = 0;
  *(__m128i *)(result + 496) = v2;
  *(_OWORD *)(result + 536) = 0;
  *(_OWORD *)(result + 560) = 0;
  return result;
}

