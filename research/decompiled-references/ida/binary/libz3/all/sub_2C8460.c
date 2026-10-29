__int64 __fastcall sub_2C8460(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  unsigned int v3; // r12d
  __int64 v4; // rbp
  __int64 v5; // rax

  v1 = sub_26B5C0(a1, 4);
  v2 = sub_26B5C0(a1, 3);
  v3 = sub_26B420(a1, 2);
  v4 = sub_26B5C0(a1, 1);
  v5 = sub_26B5C0(a1, 0);
  return Z3_fixedpoint_add_cover(v5, v4, v3, v2, v1);
}

