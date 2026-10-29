__int64 __fastcall Z3_mk_set_sort(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = Z3_mk_bool_sort();
  return Z3_mk_array_sort(a1, a2, v2);
}

