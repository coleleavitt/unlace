__int64 __fastcall sub_C6E350(int a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  _BYTE v12[64]; // [rsp+8h] [rbp-40h] BYREF

  sub_1858590(v12, a2);
  sub_1862300(v12, "arith_lhs", 1);
  sub_1862300(v12, "elim_and", 1);
  sub_1862300(v12, "som", 1);
  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C58A38;
  sub_1858590(v2 + 24, a2);
  v3 = sub_186B270(0x350u);
  sub_C79B40(v3, a1, a2, v4, v5, v6);
  *(_QWORD *)(v2 + 16) = v3;
  v7 = sub_EE8D70(v2);
  v8 = sub_D156B0(a1, (unsigned int)v12);
  v9 = sub_EE8E00(v8, v12);
  v10 = sub_EE7A70(v9, v7);
  sub_18572D0(v12);
  return v10;
}

