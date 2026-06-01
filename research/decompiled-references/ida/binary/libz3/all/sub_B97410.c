_QWORD *__fastcall sub_B97410(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rsi
  _BYTE v8[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0x138u);
  v3 = *(_QWORD *)(a2 + 104);
  v4 = (_QWORD *)v2;
  sub_180C5A0(v8, "bv");
  v5 = sub_15DA4C0(v3 + 560, v8);
  sub_966710((__int64)v4, a2, v5);
  v4[8] = a2;
  v6 = v4[3];
  *v4 = off_1C73240;
  v4[7] = off_1C57A98;
  sub_14C29C0(v4 + 9, v6, v4 + 7);
  sub_16744A0(v4 + 32, v4[3]);
  sub_16669D0(v4 + 35, v4[3]);
  v4[37] = 0;
  v4[38] = 0;
  return v4;
}

