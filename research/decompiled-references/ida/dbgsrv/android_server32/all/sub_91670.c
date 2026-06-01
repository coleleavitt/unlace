/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91670
// Address: 0x00091670

//----- (00091670) --------------------------------------------------------
bool __fastcall sub_91670(_DWORD *a1, void *lpsrc)
{
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *v7; // r4
  const void *v8; // r0
  bool v9; // zf
  int v10; // r1
  const void *v12; // r0
  _DWORD *v13; // r0

  while ( 1 )
  {
    if ( !lpsrc )
      return 0;
    v4 = 0;
    v5 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v5 )
      return v4;
    v6 = a1[2];
    v7 = v5;
    if ( (v5[2] & ~v6) != 0 )
      return 0;
    v8 = (const void *)a1[3];
    if ( v8 == (const void *)v7[3] )
      return 1;
    v10 = v6 << 31;
    v9 = v10 == 0;
    v4 = 0;
    if ( v10 )
      v9 = v8 == nullptr;
    if ( v9 )
      return v4;
    v3 = _dynamic_cast(
           v8,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v3 )
      break;
    lpsrc = (void *)v7[3];
    a1 = v3;
  }
  v12 = (const void *)a1[3];
  if ( !v12 )
    return 0;
  v4 = 0;
  v13 = _dynamic_cast(
          v12,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( !v13 )
    return v4;
  return sub_91710(v13, (void *)v7[3]);
}
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB42C: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_type_info;
// DB444: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
