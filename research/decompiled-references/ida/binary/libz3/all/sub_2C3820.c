__int64 __fastcall sub_2C3820(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 sort_universe; // rax

  v1 = sub_26B5C0(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  sort_universe = Z3_model_get_sort_universe(v3, v2, v1);
  return sub_26B3D0(a1, sort_universe);
}

