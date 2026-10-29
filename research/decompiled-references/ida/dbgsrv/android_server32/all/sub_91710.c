/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91710
// Address: 0x00091710

//----- (00091710) --------------------------------------------------------
bool __fastcall sub_91710(_DWORD *a1, void *lpsrc)
{
  int v3; // r5
  _DWORD *v4; // r0

  if ( !lpsrc )
    return 0;
  v3 = 0;
  v4 = _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v4 )
  {
    if ( (v4[2] & ~a1[2]) == 0 && a1[3] == v4[3] )
      return a1[4] == v4[4];
    return 0;
  }
  return v3;
}
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB444: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
