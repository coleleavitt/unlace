__int64 __fastcall sub_2C9C60(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 is_infinite; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  is_infinite = Z3_mk_fpa_is_infinite(v2, v1);
  return sub_26B3D0(a1, is_infinite);
}

