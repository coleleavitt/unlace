/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D85FC
// Address: 0x00000000000D85FC

//----- (00000000000D85FC) ----------------------------------------------------
_QWORD *__fastcall sub_D85FC(void *a1, void *lpsrc)
{
  _QWORD *result; // x0
  int v4; // w9
  _QWORD *v5; // x21
  __int64 v6; // x8
  void *v7; // x0
  _QWORD *v8; // x19

  if ( !lpsrc )
    return nullptr;
  while ( 1 )
  {
    result = _dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
               0);
    if ( !result )
      break;
    v4 = *((_DWORD *)a1 + 4);
    v5 = result;
    if ( ((_DWORD)result[2] & ~v4) != 0 )
      return nullptr;
    v6 = *((_QWORD *)a1 + 3);
    if ( v6 == result[3] )
      return (_QWORD *)(&dword_0 + 1);
    result = nullptr;
    if ( (v4 & 1) == 0 || !v6 )
      return result;
    v7 = _dynamic_cast(
           *((const void **)a1 + 3),
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v7 )
    {
      result = *((_QWORD **)a1 + 3);
      if ( !result )
        return result;
      result = _dynamic_cast(
                 result,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                 0);
      if ( !result )
        return result;
      v8 = result;
      result = (_QWORD *)v5[3];
      if ( !result )
        return result;
      result = _dynamic_cast(
                 result,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                 0);
      if ( !result )
        return result;
      if ( ((_DWORD)result[2] & ~*((_DWORD *)v8 + 4)) == 0 && v8[3] == result[3] )
        return (_QWORD *)(v8[4] == result[4]);
      return nullptr;
    }
    lpsrc = (void *)v5[3];
    a1 = v7;
    if ( !lpsrc )
      return nullptr;
  }
  return result;
}
// 0: using guessed type int dword_0;
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160750: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_type_info;
// 160790: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
