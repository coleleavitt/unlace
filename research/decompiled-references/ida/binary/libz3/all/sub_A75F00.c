__int64 __fastcall sub_A75F00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // eax
  __int64 v4; // r12
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  _BYTE v9[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v9, "arith");
  v3 = sub_15D1320(v2 + 560, v9);
  sub_966710((__int64)a1, a2, v3);
  *a1 = off_1C70F18;
  a1[7] = off_1C710C8;
  v4 = sub_186B270(0x398u);
  result = sub_A8D300(v4, (_DWORD)a1, *(_QWORD *)(a2 + 104), v5, v6, v7);
  a1[8] = v4;
  return result;
}

