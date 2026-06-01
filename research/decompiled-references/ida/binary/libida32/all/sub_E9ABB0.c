unsigned __int64 __fastcall sub_E9ABB0(__int64 a1, int *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __m128i si128; // xmm0

  v2 = 4LL * (unsigned int)(a2[2] + a2[1]) + 8 * ((unsigned int)a2[1] + (unsigned __int64)(unsigned int)(2 * *a2 + 1));
  result = sub_E99B50(
             (__int64 *)(a1 + 2352),
             16LL * (unsigned int)a2[3] + 8 * ((v2 != 0) + ((v2 - (v2 != 0)) >> 3)) + 152,
             3u);
  v4 = *a2;
  *(_QWORD *)(result + 8) = 55;
  v5 = a2[1];
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = v5;
  v6 = a2[2];
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 24) = v6;
  v7 = a2[3];
  *(_OWORD *)(result + 40) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2385000);
  *(_DWORD *)(result + 28) = v7;
  *(__m128i *)(result + 80) = si128;
  *(_BYTE *)(result + 32) = 1;
  *(_QWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 96) = 0x600000006LL;
  *(_DWORD *)(result + 104) = 6;
  *(_OWORD *)(result + 108) = 0;
  *(_QWORD *)(result + 124) = 0;
  *(_DWORD *)(result + 132) = 0;
  *(_DWORD *)(result + 136) = 6;
  *(_BYTE *)(result + 140) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 8LL * (unsigned int)(2 * v4) + 152) = 0;
  return result;
}

