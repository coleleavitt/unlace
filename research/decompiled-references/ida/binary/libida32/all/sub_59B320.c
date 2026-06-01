__int64 __fastcall sub_59B320(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __m128i si128; // xmm0

  result = operator new(0x90u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(result + 8) = a3;
  *(__m128i *)(result + 16) = si128;
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 32) = a2;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = result + 48;
  *(_QWORD *)(result + 72) = result + 48;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)result = &off_2B05660;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 136) = -1;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 120) = 0;
  return result;
}

