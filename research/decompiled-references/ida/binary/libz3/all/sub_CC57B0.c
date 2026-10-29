__int64 __fastcall sub_CC57B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _OWORD *v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _OWORD *v12; // rax
  void *v14; // [rsp+0h] [rbp-38h]

  v3 = sub_186B270(0x20u);
  *(_DWORD *)(v3 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v3 = &off_1C59398;
  sub_1858590(v3 + 24, a2);
  v5 = (_QWORD *)sub_186B270(0x78u);
  *v5 = a1;
  v6 = v5;
  v7 = (_OWORD *)sub_186B270(0x80u);
  v6[1] = v7;
  v8 = *v6;
  *((_DWORD *)v6 + 6) = 0;
  *v7 = 0;
  v6[2] = 8;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  sub_16669D0(v6 + 4, v8);
  sub_14B7810((_DWORD)v6 + 48, *v6, a2, v9, v10, v11, v14);
  v6[11] = 0;
  v12 = (_OWORD *)sub_186B270(0x80u);
  v6[12] = v12;
  v6[13] = 8;
  *((_DWORD *)v6 + 28) = 0;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  *((_DWORD *)v6 + 17) = sub_1859960(a2, "recover_01_max_bits", 10);
  *(_QWORD *)(v4 + 16) = v6;
  return sub_EE8D70(v4);
}

