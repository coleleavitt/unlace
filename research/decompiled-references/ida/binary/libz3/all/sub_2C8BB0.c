__int64 __fastcall sub_2C8BB0(__int64 *a1)
{
  __int64 model; // rax

  sub_26B5C0(a1, 1);
  sub_26B5C0(a1, 0);
  model = Z3_optimize_get_model();
  return sub_26B3D0(a1, model);
}

