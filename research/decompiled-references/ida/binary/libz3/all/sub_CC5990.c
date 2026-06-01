__int64 __fastcall sub_CC5990(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _OWORD *v11; // rax
  void *v13; // [rsp+0h] [rbp-38h]

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C59398;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (_QWORD *)sub_186B270(0x78u);
  *v4 = a2;
  v5 = v4;
  v6 = (_OWORD *)sub_186B270(0x80u);
  v5[1] = v6;
  v7 = *v5;
  *((_DWORD *)v5 + 6) = 0;
  *v6 = 0;
  v5[2] = 8;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  sub_16669D0(v5 + 4, v7);
  sub_14B7810((_DWORD)v5 + 48, *v5, a1 + 24, v8, v9, v10, v13);
  v5[11] = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  v5[12] = v11;
  v5[13] = 8;
  *((_DWORD *)v5 + 28) = 0;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  *((_DWORD *)v5 + 17) = sub_1859960(a1 + 24, "recover_01_max_bits", 10);
  *(_QWORD *)(v3 + 16) = v5;
  return v3;
}

