__int64 __fastcall sub_E821B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0x30u);
  sub_180C5A0(v5, "arith");
  v3 = sub_15D1320(a1 + 560, v5);
  *(_QWORD *)(v2 + 8) = a1;
  *(_DWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 24) = a2;
  *(_QWORD *)v2 = &off_1C5D260;
  sub_16669D0(v2 + 32, a1);
  return v2;
}

