__int64 __fastcall sub_2C5F80(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax

  v1 = sub_26B5C0(a1, 5);
  v2 = sub_26B5C0(a1, 4);
  v3 = sub_26B5C0(a1, 3);
  v4 = sub_26B780(a1, 2);
  v5 = sub_26B5C0(a1, 1);
  v6 = sub_26B5C0(a1, 0);
  return Z3_solver_propagate_init(v6, v5, v4, v3, v2, v1);
}

