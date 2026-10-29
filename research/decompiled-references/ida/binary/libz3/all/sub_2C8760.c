__int64 __fastcall sub_2C8760(__int64 *a1)
{
  void *v1; // r12
  __int64 v2; // rbp
  void *v3; // rax
  __int64 v4; // rax

  v1 = (void *)sub_26B560(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = (void *)sub_26B5C0(a1, 0);
  v4 = Z3_fixedpoint_from_string(v3, v2, v1);
  return sub_26B3D0(a1, v4);
}

