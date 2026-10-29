__int64 __fastcall sub_BE5D00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  __m128 v7; // xmm0
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 result; // rax
  _BYTE v11[32]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = a2;
  sub_180C5A0(v11, "seq");
  v4 = sub_15DA4C0(a3 + 560, v11);
  v5 = sub_15D2690(a3, v4);
  v6 = *(_QWORD *)(a1 + 8);
  *(__m128 *)(a1 + 24) = _mm_loadh_ps((const double *)(v5 + 88));
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  *(_QWORD *)(a1 + 96) = 0;
  v7 = _mm_loadh_ps((const double *)(a1 + 16));
  *(_DWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 64) = v5;
  *(_DWORD *)(a1 + 88) = v5;
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = v8;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 144) = 0;
  *(__m128 *)(a1 + 48) = v7;
  *(__m128 *)(a1 + 72) = v7;
  sub_16669D0(a1 + 152, v6);
  v9 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 168) = v9;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 176) = 8;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  result = sub_186B270(0xC0u);
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 140) = 0;
  *(_DWORD *)(result + 164) = 0;
  *(_DWORD *)(result + 188) = 0;
  *(_QWORD *)(a1 + 192) = result;
  *(_QWORD *)(a1 + 200) = 8;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = -1;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 72) = 0;
  *(_OWORD *)(result + 96) = 0;
  *(_OWORD *)(result + 120) = 0;
  *(_OWORD *)(result + 144) = 0;
  *(_OWORD *)(result + 168) = 0;
  return result;
}

