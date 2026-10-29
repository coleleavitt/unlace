__int64 __fastcall sub_2C12C0(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // r15d
  int v3; // r14d
  int v4; // r13d
  int v5; // r12d
  int v6; // eax
  __int64 exists; // rax
  int v9; // [rsp+Ch] [rbp-3Ch]

  v1 = sub_26B5C0(a1, 6);
  v2 = sub_26B6B0(a1, 5);
  v3 = sub_26B490(a1, 4);
  v4 = sub_26B6B0(a1, 3);
  v5 = sub_26B490(a1, 2);
  v9 = sub_26B490(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  exists = Z3_mk_exists_const(v6, v9, v5, v4, v3, v2, v1);
  return sub_26B3D0(a1, exists);
}

