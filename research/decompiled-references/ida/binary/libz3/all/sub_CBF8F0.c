__int64 __fastcall sub_CBF8F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  void *v12; // [rsp+0h] [rbp-38h]

  v3 = sub_186B270(0x20u);
  *(_DWORD *)(v3 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v3 = &off_1C592C0;
  sub_1858590(v3 + 24, a2);
  v5 = (_QWORD *)sub_186B270(0xC8u);
  *v5 = a1;
  v6 = v5;
  sub_F735C0(v5 + 1, a1);
  sub_16669D0(v6 + 17, *v6);
  v7 = *v6;
  v6[20] = 0;
  v6[19] = v7;
  sub_14B7810((_DWORD)v6 + 168, v7, a2, v8, v9, v10, v12);
  sub_14B5FE0(v6 + 21, a2);
  *((_BYTE *)v6 + 186) = sub_1859610(a2, "lia2pb_partial", 0);
  *((_DWORD *)v6 + 47) = sub_1859960(a2, "lia2pb_max_bits", 32);
  *((_DWORD *)v6 + 48) = sub_1859960(a2, "lia2pb_total_bits", 2048);
  *(_QWORD *)(v4 + 16) = v6;
  return sub_EE8D70(v4);
}

