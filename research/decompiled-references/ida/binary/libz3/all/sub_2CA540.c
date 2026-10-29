__int64 __fastcall sub_2CA540(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = sub_26B5C0(a1, 4);
  v2 = sub_26B5C0(a1, 3);
  v3 = sub_26B5C0(a1, 2);
  v4 = sub_26B5C0(a1, 1);
  v5 = sub_26B5C0(a1, 0);
  v6 = Z3_mk_fpa_to_fp_int_real(v5, v4, v3, v2, v1);
  return sub_26B3D0(a1, v6);
}

