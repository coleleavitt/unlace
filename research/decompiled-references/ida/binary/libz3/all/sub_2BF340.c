__int64 __fastcall sub_2BF340(__int64 *a1)
{
  int v1; // eax
  __int64 has_size; // rax

  sub_26B5C0(a1, 2);
  sub_26B5C0(a1, 1);
  v1 = sub_26B5C0(a1, 0);
  has_size = Z3_mk_set_has_size(v1);
  return sub_26B3D0(a1, has_size);
}

