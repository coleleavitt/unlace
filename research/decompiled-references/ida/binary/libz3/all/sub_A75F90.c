_QWORD *__fastcall sub_A75F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // r12
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0x48u);
  v3 = *(_QWORD *)(a2 + 104);
  v4 = (_QWORD *)v2;
  sub_180C5A0(v11, "arith");
  v5 = sub_15D1320(v3 + 560, v11);
  sub_966710((__int64)v4, a2, v5);
  *v4 = off_1C70F18;
  v4[7] = off_1C710C8;
  v6 = sub_186B270(0x398u);
  sub_A8D300(v6, (_DWORD)v4, *(_QWORD *)(a2 + 104), v7, v8, v9);
  v4[8] = v6;
  return v4;
}

