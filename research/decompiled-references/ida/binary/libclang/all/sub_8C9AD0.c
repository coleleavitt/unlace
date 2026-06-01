__int64 __fastcall sub_8C9AD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i si128; // xmm1

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  result = operator new(0x148u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 144) = result + 160;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 152) = 0x400000000LL;
  *(_QWORD *)(result + 192) = result + 208;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_DWORD *)(result + 264) = 0;
  *(_QWORD *)(result + 256) = 0;
  *(_DWORD *)(result + 288) = 0;
  *(_QWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 280) = 0;
  *(_DWORD *)(result + 312) = 0;
  *(_QWORD *)(result + 296) = 0;
  *(_QWORD *)(result + 304) = 0;
  *(_QWORD *)(result + 320) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 80) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 128) = 0;
  *(__m128i *)(result + 208) = si128;
  *(_OWORD *)(result + 224) = 0;
  *(_OWORD *)(result + 240) = 0;
  *(_QWORD *)(a1 + 24) = result;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}

