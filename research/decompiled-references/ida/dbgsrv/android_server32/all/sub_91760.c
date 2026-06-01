/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91760
// Address: 0x00091760

//----- (00091760) --------------------------------------------------------
bool __fastcall sub_91760(_DWORD *a1, _UNKNOWN **a2, int **a3)
{
  int v5; // r5
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  bool v9; // zf
  const void *v11; // r0
  int *v12; // r6

  if ( a2 == &`typeinfo for'decltype(nullptr) )
  {
    v11 = (const void *)a1[3];
    v12 = dword_C95B8;
    if ( v11
      && _dynamic_cast(
           v11,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
           0) )
    {
      v12 = dword_C95B0;
    }
    *a3 = v12;
    return 1;
  }
  if ( sub_91438((int)a1, a2) )
    return 1;
  if ( !a2 )
    return 0;
  v5 = 0;
  v6 = _dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v6 )
  {
    v7 = a1[2];
    v8 = v6[2];
    v9 = (v8 & ~v7) << 29 == 0;
    if ( !((v8 & ~v7) << 29) )
      v9 = (v7 & ~v8 & 0x60) == 0;
    if ( v9 && a1[3] == v6[3] )
      return a1[4] == v6[4];
    return 0;
  }
  return v5;
}
// C95B0: using guessed type int dword_C95B0[2];
// C95B8: using guessed type int dword_C95B8[2];
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB438: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__function_type_info;
// DB444: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
// DB4BC: using guessed type _UNKNOWN *`typeinfo for'decltype(nullptr);
