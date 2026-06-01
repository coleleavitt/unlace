__int64 __fastcall sub_2C5CB0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 trail; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  trail = Z3_solver_get_trail(v2, v1);
  return sub_26B3D0(a1, trail);
}

