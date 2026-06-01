__int64 __fastcall sub_E2D2A0(_QWORD **a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  __m128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r14
  _BYTE v14[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_E2D0F0(a1);
  v4 = (_QWORD *)sub_186B270(0x158u);
  *v4 = a2;
  v5 = v4;
  v4[1] = 0;
  sub_16669D0(v4 + 2, a2);
  sub_16744A0(v5 + 4, *v5);
  sub_1684300(v5 + 7, *v5);
  v6 = *v5;
  v5[9] = *v5;
  sub_180C5A0(v14, "seq");
  v7 = sub_15DA4C0(v6 + 560, v14);
  v8 = sub_15D2690(v6, v7);
  v9 = *v5;
  *((__m128 *)v5 + 5) = _mm_loadh_ps((const double *)(v8 + 88));
  LODWORD(v8) = *(_DWORD *)(v8 + 16);
  v5[19] = 0;
  v10 = _mm_loadh_ps((const double *)v5 + 9);
  *((_DWORD *)v5 + 24) = v8;
  *((_DWORD *)v5 + 30) = v8;
  *((_DWORD *)v5 + 36) = v8;
  v11 = v5[9];
  v5[21] = 0;
  v5[20] = v11;
  v5[22] = 0;
  v5[23] = 0;
  v5[24] = 0xFFFFFFFFLL;
  v5[25] = 0;
  *(__m128 *)(v5 + 13) = v10;
  *((__m128 *)v5 + 8) = v10;
  sub_15F01E0(v5 + 26, v9);
  v12 = *v5;
  v5[29] = *v5;
  sub_180C5A0(v14, "pb");
  *((_DWORD *)v5 + 60) = sub_15DA4C0(v12 + 560, v14);
  *a1 = v5;
  v5[39] = v5 + 41;
  v5[33] = 0;
  v5[34] = 0;
  v5[35] = 1;
  v5[36] = 0;
  v5[40] = 0;
  *((_BYTE *)v5 + 328) = 0;
  v5[37] = 0;
  *((_WORD *)v5 + 152) = 0;
  *((_BYTE *)v5 + 306) = 1;
  *(_OWORD *)(v5 + 31) = 0;
  return sub_E2DA90(v5, a3);
}

