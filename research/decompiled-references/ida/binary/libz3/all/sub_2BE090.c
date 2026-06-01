__int64 __fastcall sub_2BE090(__int64 *a1)
{
  int v1; // eax
  __int64 is_int; // rax

  sub_26B5C0(a1, 1);
  v1 = sub_26B5C0(a1, 0);
  is_int = Z3_mk_is_int(v1);
  return sub_26B3D0(a1, is_int);
}

