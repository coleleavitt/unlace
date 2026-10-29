__int64 __fastcall sub_2C9BE0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 is_subnormal; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  is_subnormal = Z3_mk_fpa_is_subnormal(v2, v1);
  return sub_26B3D0(a1, is_subnormal);
}

