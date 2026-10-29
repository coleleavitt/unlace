__int64 __fastcall sub_2C61D0(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax

  v1 = sub_26B420(a1, 4);
  v2 = sub_26B490(a1, 3);
  v3 = sub_26B5C0(a1, 2);
  v4 = sub_26B5C0(a1, 1);
  v5 = sub_26B5C0(a1, 0);
  return Z3_solver_next_split(v5, v4, v3, v2, v1);
}

