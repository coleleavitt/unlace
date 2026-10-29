__int64 __fastcall sub_2C6650(__int64 *a1)
{
  __int64 model; // rax

  sub_26B5C0(a1, 1);
  sub_26B5C0(a1, 0);
  model = Z3_solver_get_model();
  return sub_26B3D0(a1, model);
}

