__int64 __fastcall sub_2C3900(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 as_array_func_decl; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  as_array_func_decl = Z3_get_as_array_func_decl(v2, v1);
  return sub_26B3D0(a1, as_array_func_decl);
}

