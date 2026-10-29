__int64 __fastcall sub_2C6340(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  int v3; // r15d
  int v4; // r14d
  int v5; // r13d
  int v6; // eax
  int v8; // [rsp+0h] [rbp-48h]
  int v9; // [rsp+Ch] [rbp-3Ch]

  v1 = sub_26B5C0(a1, 7);
  v2 = sub_26B6B0(a1, 6);
  v3 = sub_26B6B0(a1, 5);
  v4 = sub_26B490(a1, 4);
  v5 = sub_26B6B0(a1, 3);
  v9 = sub_26B490(a1, 2);
  v8 = sub_26B5C0(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  return Z3_solver_propagate_consequence(v6, v8, v9, v5, v4, v3, v2, v1);
}

