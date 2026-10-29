__int64 __fastcall sub_2C67D0(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 v2; // r12
  __int64 v3; // rax

  v1 = sub_26B450(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  return Z3_solver_to_dimacs_string(v3, v2, v1);
}

