/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8284
// Address: 0x00000000000D8284

//----- (00000000000D8284) ----------------------------------------------------
_BYTE *__fastcall sub_D8284(const char **a1, const char **lpsrc)
{
  _BYTE *result; // x0

  if ( ((_BYTE)a1[2] & 0x18) != 0 )
    return (_BYTE *)(strcmp(a1[1], lpsrc[1]) == 0);
  if ( !lpsrc )
    return nullptr;
  result = _dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
             0);
  if ( result )
  {
    if ( (result[16] & 0x18) == 0 )
      return (_BYTE *)(a1 == lpsrc);
    return (_BYTE *)(strcmp(a1[1], lpsrc[1]) == 0);
  }
  return result;
}
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160730: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pbase_type_info;
