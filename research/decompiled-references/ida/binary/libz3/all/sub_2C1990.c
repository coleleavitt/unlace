__int64 __fastcall sub_2C1990(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 array_sort_range; // rax

  v1 = sub_26B5C0(a1, 1);
  v2 = sub_26B5C0(a1, 0);
  array_sort_range = Z3_get_array_sort_range(v2, v1);
  return sub_26B3D0(a1, array_sort_range);
}

