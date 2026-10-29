__int64 __fastcall sub_2C9F70(__int64 *a1)
{
  unsigned int v1; // r13d
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = sub_26B490(a1, 3);
  v2 = sub_26B5C0(a1, 2);
  v3 = sub_26B5C0(a1, 1);
  v4 = sub_26B5C0(a1, 0);
  v5 = Z3_mk_fpa_to_ubv(v4, v3, v2, v1);
  return sub_26B3D0(a1, v5);
}

