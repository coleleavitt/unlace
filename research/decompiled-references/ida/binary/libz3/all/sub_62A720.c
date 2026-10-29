__int64 __fastcall sub_62A720(__int64 *a1, const __m128i *a2)
{
  _QWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // r14
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  _QWORD v12[6]; // [rsp+0h] [rbp-30h] BYREF

  *(__m128i *)a1 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)a2);
  v2 = (_QWORD *)sub_186B270(0x80u);
  *((_DWORD *)a1 + 8) = 0;
  *v2 = 0;
  v2[2] = 0;
  v2[4] = 0;
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[12] = 0;
  v2[14] = 0;
  a1[2] = (__int64)v2;
  a1[5] = (__int64)(a1 + 7);
  a1[3] = 8;
  a1[6] = 0x1000000000LL;
  v3 = (_OWORD *)sub_186B270(0x40u);
  a1[23] = (__int64)v3;
  a1[24] = 8;
  *((_DWORD *)a1 + 50) = 0;
  a1[30] = 0;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *((_OWORD *)a1 + 13) = 0;
  *((_OWORD *)a1 + 14) = 0;
  v4 = sub_186B270(0xC0u);
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 168) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 160) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  a1[31] = v4;
  a1[32] = 8;
  *((_DWORD *)a1 + 66) = 0;
  a1[34] = 0;
  a1[35] = 0xFFFFFFFFLL;
  a1[36] = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  v6 = *a1;
  a1[37] = (__int64)v5;
  a1[38] = 8;
  *((_DWORD *)a1 + 78) = 0;
  a1[42] = v6;
  a1[43] = 0;
  a1[44] = 0;
  a1[45] = v6;
  a1[46] = v6;
  a1[47] = 0;
  a1[48] = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  *((_OWORD *)a1 + 20) = 0;
  sub_657FC0(a1 + 49);
  v7 = *a1;
  v12[0] = 0;
  sub_E66730(a1 + 50, v7, v12, 0);
  sub_18572D0(v12);
  sub_14405A0(a1 + 51, *a1);
  v8 = *a1;
  a1[119] = *a1;
  sub_15F01E0(a1 + 120, v8);
  sub_1624F90(a1 + 123, v8);
  *((_BYTE *)a1 + 1016) = 0;
  a1[128] = 0;
  *((_WORD *)a1 + 516) = 0;
  *((_BYTE *)a1 + 1034) = 0;
  v9 = (_OWORD *)sub_186B270(0x40u);
  v10 = *a1;
  a1[130] = (__int64)v9;
  a1[131] = 8;
  *((_DWORD *)a1 + 264) = 0;
  a1[133] = v10;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  result = sub_16744A0(a1 + 134, v10);
  *((_BYTE *)a1 + 1096) = 1;
  return result;
}

