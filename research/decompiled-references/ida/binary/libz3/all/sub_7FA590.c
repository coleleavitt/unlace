void __fastcall sub_7FA590(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v7[64]; // [rsp+18h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a2;
  sub_1858590(a1 + 8, a3);
  sub_7F80F0(a1 + 16, a2);
  *(_OWORD *)(a1 + 56) = 0;
  sub_11CB0C0(a1 + 72, a1 + 8, a2);
  sub_11F1A20(a1 + 4336, a1 + 72);
  *(_BYTE *)(a1 + 5016) = 0;
  *(_OWORD *)(a1 + 5000) = 0;
  v3 = (_QWORD *)sub_186B270(0xC0u);
  *v3 = 0;
  v3[1] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v3[15] = 0;
  v3[16] = 0;
  v3[18] = 0;
  v3[19] = 0;
  v3[21] = 0;
  v3[22] = 0;
  *(_QWORD *)(a1 + 5024) = v3;
  *(_QWORD *)(a1 + 5032) = 8;
  *(_DWORD *)(a1 + 5040) = 0;
  v4 = (_QWORD *)sub_186B270(0xC0u);
  *v4 = 0;
  v4[1] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[18] = 0;
  v4[19] = 0;
  v4[21] = 0;
  v4[22] = 0;
  *(_QWORD *)(a1 + 5048) = v4;
  *(_QWORD *)(a1 + 5056) = 8;
  *(_DWORD *)(a1 + 5064) = 0;
  *(_DWORD *)(a1 + 5072) = 0;
  sub_1862300(a1 + 8, "drat.check_unsat", 1);
  sub_1862300(a1 + 8, "euf", 0);
  sub_11B7290(a1 + 72, a1 + 8);
  sub_11ECE90(a1 + 4336);
  sub_180C5A0(&v6, "rup");
  v5 = v6;
  v6 = a1 + 8;
  *(_QWORD *)(a1 + 64) = v5;
  sub_17F9A60(v7, "solver");
  *(_BYTE *)(a1 + 5016) = sub_1859630(v6, "proof.check_rup", v7, 1);
  sub_18572D0(v7);
}

