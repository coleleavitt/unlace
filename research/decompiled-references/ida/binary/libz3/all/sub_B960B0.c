__int64 __fastcall sub_B960B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  __int64 result; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v7, "bv");
  v4 = sub_15DA4C0(v3 + 560, v7);
  sub_966710((__int64)a1, a2, v4);
  a1[8] = a2;
  v5 = a1[3];
  *a1 = off_1C73240;
  a1[7] = off_1C57A98;
  sub_14C29C0(a1 + 9, v5, a1 + 7);
  sub_16744A0(a1 + 32, a1[3]);
  result = sub_16669D0(a1 + 35, a1[3]);
  a1[37] = 0;
  a1[38] = 0;
  return result;
}

