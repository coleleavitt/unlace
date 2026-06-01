__int64 __fastcall sub_565620(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x80u);
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 72) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383BA0);
  *(_QWORD *)result = a1;
  *(_QWORD *)(result + 8) = result + 8;
  *(_QWORD *)(result + 16) = result + 8;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_BYTE *)(result + 112) = 1;
  *(_DWORD *)(result + 116) = 0;
  *(_WORD *)(result + 120) = 0;
  *(_DWORD *)(result + 124) = 220;
  *(_QWORD *)(result + 32) = result + 8;
  *(__m128i *)(result + 88) = si128;
  return result;
}

