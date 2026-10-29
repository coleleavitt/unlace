__int64 __fastcall sub_2C87B0(__int64 *a1)
{
  __int64 v1; // r12
  int v2; // ebp
  void *v3; // rax
  __int64 v4; // rax

  v1 = sub_26B560(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = (void *)sub_26B5C0(a1, 0);
  v4 = Z3_fixedpoint_from_file(v3, v2, v1);
  return sub_26B3D0(a1, v4);
}

