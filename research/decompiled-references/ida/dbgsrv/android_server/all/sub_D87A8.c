/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D87A8
// Address: 0x00000000000D87A8

//----- (00000000000D87A8) ----------------------------------------------------
_DWORD *__fastcall sub_D87A8(__int64 a1, const char **lpsrc, __int64 **a3)
{
  _DWORD *result; // x0
  int v6; // w8
  int v7; // w9
  const void *v8; // x0
  __int64 *v10; // x19
  _BYTE *v11; // x0

  if ( lpsrc != (const char **)&`typeinfo for'decltype(nullptr) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 0x18) != 0 )
      goto LABEL_3;
    if ( !lpsrc )
      return nullptr;
    v11 = _dynamic_cast(
            lpsrc,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
            0);
    if ( v11 )
    {
      if ( (v11[16] & 0x18) != 0 )
      {
LABEL_3:
        if ( strcmp(*(const char **)(a1 + 8), lpsrc[1]) )
          goto LABEL_4;
        return &dword_0 + 1;
      }
      if ( (const char **)a1 == lpsrc )
        return &dword_0 + 1;
    }
LABEL_4:
    result = _dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
               0);
    if ( !result )
      return result;
    v6 = result[4];
    v7 = *(_DWORD *)(a1 + 16);
    if ( ((unsigned __int8)v6 & (unsigned __int8)~(_BYTE)v7 & 7) == 0
      && ((unsigned __int8)v7 & (unsigned __int8)~(_BYTE)v6 & 0x60) == 0
      && *(_QWORD *)(a1 + 24) == *((_QWORD *)result + 3) )
    {
      return (_DWORD *)(*(_QWORD *)(a1 + 32) == *((_QWORD *)result + 4));
    }
    return nullptr;
  }
  v8 = *(const void **)(a1 + 24);
  v10 = qword_120780;
  if ( v8
    && _dynamic_cast(
         v8,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
         0) )
  {
    v10 = qword_120770;
  }
  *a3 = v10;
  return &dword_0 + 1;
}
// 0: using guessed type int dword_0;
// 120770: using guessed type __int64 qword_120770[2];
// 120780: using guessed type __int64 qword_120780[2];
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160730: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pbase_type_info;
// 160770: using guessed type __int64 *`typeinfo for'__cxxabiv1::__function_type_info;
// 160790: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
// 160890: using guessed type void (__fastcall *`typeinfo for'decltype(nullptr))(std::type_info *__hidden this);
