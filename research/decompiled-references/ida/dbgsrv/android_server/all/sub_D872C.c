/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D872C
// Address: 0x00000000000D872C

//----- (00000000000D872C) ----------------------------------------------------
_QWORD *__fastcall sub_D872C(__int64 a1, void *lpsrc)
{
  _QWORD *result; // x0

  if ( lpsrc )
  {
    result = _dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
               0);
    if ( !result )
      return result;
    if ( ((_DWORD)result[2] & ~*(_DWORD *)(a1 + 16)) == 0 && *(_QWORD *)(a1 + 24) == result[3] )
      return (_QWORD *)(*(_QWORD *)(a1 + 32) == result[4]);
  }
  return nullptr;
}
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160790: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
