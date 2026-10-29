__int64 __fastcall sub_2C3590(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 const_interp; // rax

  v1 = sub_26B5C0(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  const_interp = Z3_model_get_const_interp(v3, v2, v1);
  return sub_26B3D0(a1, const_interp);
}

