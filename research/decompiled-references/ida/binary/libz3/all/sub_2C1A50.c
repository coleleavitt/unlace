__int64 __fastcall sub_2C1A50(__int64 *a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 tuple_sort_field_decl; // rax

  v1 = sub_26B490(a1, 2);
  v2 = sub_26B5C0(a1, 1);
  v3 = sub_26B5C0(a1, 0);
  tuple_sort_field_decl = Z3_get_tuple_sort_field_decl(v3, v2, v1);
  return sub_26B3D0(a1, tuple_sort_field_decl);
}

