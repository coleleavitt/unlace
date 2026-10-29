__int64 __fastcall sub_CF55D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // eax
  void *v8; // [rsp+0h] [rbp-38h]
  _BYTE v9[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0x78u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C59DB0;
  *(_QWORD *)(v2 + 16) = a2;
  sub_14B7810(v2 + 24, a2, a1 + 112, v3, v4, v5, v8);
  *(_QWORD *)(v2 + 56) = a2;
  *(_BYTE *)(v2 + 66) = 0;
  *(_WORD *)(v2 + 64) = 257;
  *(_QWORD *)(v2 + 72) = a2;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  sub_1858590(v2 + 112, a1 + 112);
  sub_17F9A60(v9, "tactic");
  v6 = sub_1859980(a1 + 112, "propagate_values.max_rounds", v9, 4);
  *(_DWORD *)(v2 + 100) = sub_1859960(a1 + 112, "max_rounds", v6);
  sub_18572D0(v9);
  sub_14B63D0(v2 + 24, 0);
  return v2;
}

