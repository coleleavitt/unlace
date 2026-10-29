__int64 __fastcall sub_B98DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  int v5; // eax
  __m128i si128; // xmm1
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  _BYTE v10[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0xB8u);
  v3 = *(_QWORD *)(a2 + 104);
  v4 = v2;
  sub_180C5A0(v10, "sls");
  v5 = sub_15DA4C0(v3 + 560, v10);
  sub_966710(v4, a2, v5);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6800);
  *(_QWORD *)v4 = off_1C73410;
  *(__m128i *)(v4 + 96) = si128;
  v7 = _mm_load_si128((const __m128i *)&xmmword_18B6810);
  *(_QWORD *)(v4 + 56) = off_1C73608;
  *(__m128i *)(v4 + 112) = v7;
  v8 = _mm_load_si128((const __m128i *)&xmmword_18B6820);
  *(_WORD *)(v4 + 92) = 256;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_BYTE *)(v4 + 128) = 0;
  *(_QWORD *)(v4 + 148) = 0;
  *(_BYTE *)(v4 + 156) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(__m128i *)(v4 + 132) = v8;
  *(_OWORD *)(v4 + 160) = 0;
  return v4;
}

