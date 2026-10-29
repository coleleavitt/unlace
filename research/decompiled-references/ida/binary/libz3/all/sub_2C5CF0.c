__int64 __fastcall sub_2C5CF0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 non_units; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  non_units = Z3_solver_get_non_units(v2, v1);
  return sub_26B3D0(a1, non_units);
}

