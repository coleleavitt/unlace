__int64 __fastcall sub_B97DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // eax
  __m128i si128; // xmm1
  __m128i v5; // xmm1
  __m128i v7; // xmm1
  _BYTE v8[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v8, "sls");
  v3 = sub_15DA4C0(v2 + 560, v8);
  sub_966710(a1, a2, v3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6800);
  *(_QWORD *)a1 = off_1C73410;
  *(__m128i *)(a1 + 96) = si128;
  v5 = _mm_load_si128((const __m128i *)&xmmword_18B6810);
  *(_QWORD *)(a1 + 56) = off_1C73608;
  *(__m128i *)(a1 + 112) = v5;
  v7 = _mm_load_si128((const __m128i *)&xmmword_18B6820);
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 92) = 256;
  *(_BYTE *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 156) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(__m128i *)(a1 + 132) = v7;
  *(_OWORD *)(a1 + 160) = 0;
  return 256;
}

