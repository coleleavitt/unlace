__int64 __fastcall sub_2BC6F0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = sub_26B5C0(a1, 0);
  v2 = Z3_mk_context(v1);
  sub_26B3D0(a1, v2);
  return Z3_set_error_handler(v2, sub_2BC5C0);
}

