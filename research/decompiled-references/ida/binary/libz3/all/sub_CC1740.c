__int64 __fastcall sub_CC1740(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  void *v11; // [rsp-8h] [rbp-38h]

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C592C0;
  sub_1858590(v2 + 24, a1 + 24);
  v4 = (_QWORD *)sub_186B270(0xC8u);
  *v4 = a2;
  v5 = v4;
  sub_F735C0(v4 + 1, a2);
  sub_16669D0(v5 + 17, *v5);
  v6 = *v5;
  v5[20] = 0;
  v5[19] = v6;
  sub_14B7810((_DWORD)v5 + 168, v6, a1 + 24, v7, v8, v9, v11);
  sub_14B5FE0(v5 + 21, a1 + 24);
  *((_BYTE *)v5 + 186) = sub_1859610(a1 + 24, "lia2pb_partial", 0);
  *((_DWORD *)v5 + 47) = sub_1859960(a1 + 24, "lia2pb_max_bits", 32);
  *((_DWORD *)v5 + 48) = sub_1859960(a1 + 24, "lia2pb_total_bits", 2048);
  *(_QWORD *)(v3 + 16) = v5;
  return v3;
}

