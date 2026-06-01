__int64 __fastcall sub_2BEE90(__int64 *a1)
{
  unsigned __int8 v1; // bp
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = sub_26B450(a1, 3);
  v2 = sub_26B5C0(a1, 2);
  v3 = sub_26B5C0(a1, 1);
  v4 = sub_26B5C0(a1, 0);
  v5 = Z3_mk_bvsub_no_underflow(v4, v3, v2, v1);
  return sub_26B3D0(a1, v5);
}

