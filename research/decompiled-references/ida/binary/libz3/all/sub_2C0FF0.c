__int64 __fastcall sub_2C0FF0(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // r12
  int v4; // r15d
  unsigned __int8 v5; // bp
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+0h] [rbp-48h]
  int v10; // [rsp+4h] [rbp-44h]
  int v11; // [rsp+8h] [rbp-40h]

  v1 = sub_26B5C0(a1, 8);
  v2 = sub_26B670(a1, 7);
  v3 = sub_26B6B0(a1, 6);
  v4 = sub_26B490(a1, 5);
  v11 = sub_26B6B0(a1, 4);
  v10 = sub_26B490(a1, 3);
  v9 = sub_26B490(a1, 2);
  v5 = sub_26B450(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  v7 = Z3_mk_quantifier(v6, v5, v9, v10, v11, v4, v3, v2, v1);
  return sub_26B3D0(a1, v7);
}

