__int64 __fastcall sub_2C5BF0(__int64 a1)
{
  void *v1; // r12
  __int64 v2; // rbp
  int v3; // eax

  v1 = (void *)sub_26B560(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  return Z3_solver_from_string(v3, v2, v1);
}

