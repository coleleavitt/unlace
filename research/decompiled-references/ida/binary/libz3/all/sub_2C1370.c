__int64 __fastcall sub_2C1370(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  int v3; // r15d
  int v4; // r14d
  unsigned __int8 v5; // bp
  int v6; // eax
  __int64 v7; // rax
  int v9; // [rsp+8h] [rbp-40h]
  int v10; // [rsp+Ch] [rbp-3Ch]

  v1 = sub_26B5C0(a1, 7);
  v2 = sub_26B6B0(a1, 6);
  v3 = sub_26B490(a1, 5);
  v4 = sub_26B6B0(a1, 4);
  v10 = sub_26B490(a1, 3);
  v9 = sub_26B490(a1, 2);
  v5 = sub_26B450(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  v7 = Z3_mk_quantifier_const(v6, v5, v9, v10, v4, v3, v2, v1);
  return sub_26B3D0(a1, v7);
}

