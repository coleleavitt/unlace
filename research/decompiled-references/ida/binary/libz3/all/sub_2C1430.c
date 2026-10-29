__int64 __fastcall sub_2C1430(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // r15d
  __int64 v3; // r14
  int v4; // r13d
  int v5; // r12d
  int v6; // eax
  __int64 v7; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-59h]
  int v10; // [rsp+10h] [rbp-58h]
  int v11; // [rsp+18h] [rbp-50h]
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  int v14; // [rsp+28h] [rbp-40h]

  v14 = sub_26B5C0(a1, 11);
  v1 = sub_26B6B0(a1, 10);
  v2 = sub_26B490(a1, 9);
  v3 = sub_26B6B0(a1, 8);
  v4 = sub_26B490(a1, 7);
  v5 = sub_26B6B0(a1, 6);
  v13 = sub_26B490(a1, 5);
  v11 = sub_26B590(a1, 4);
  v10 = sub_26B590(a1, 3);
  v12 = sub_26B490(a1, 2);
  v9 = sub_26B450(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  v7 = Z3_mk_quantifier_const_ex(v6, v9, v12, v10, v11, v13, v5, v4, v3, v2, v1, v14);
  return sub_26B3D0(a1, v7);
}

