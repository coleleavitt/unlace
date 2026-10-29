/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8304
// Address: 0x00000000000D8304

//----- (00000000000D8304) ----------------------------------------------------
void (__fastcall **__fastcall sub_D8304(__int64 a1, const char **lpsrc, _QWORD **a3))(std::type_info *__hidden this)
{
  void (__fastcall **result)(std::type_info *__hidden); // x0
  void (__fastcall **v7)(std::type_info *__hidden); // x21
  int v8; // w8
  int v9; // w9
  void (__fastcall **v10)(std::type_info *__hidden); // x8
  void *v11; // x0
  _BYTE *v12; // x0
  _QWORD *v13; // x8
  _QWORD *v14; // x0
  void (__fastcall **v15)(std::type_info *__hidden); // x20
  _QWORD *v16; // x22
  _QWORD v17[4]; // [xsp+8h] [xbp-88h] BYREF
  _QWORD *v18; // [xsp+28h] [xbp-68h]
  __int64 v19; // [xsp+30h] [xbp-60h]
  __int64 v20; // [xsp+38h] [xbp-58h]
  __int64 v21; // [xsp+40h] [xbp-50h]
  __int64 v22; // [xsp+48h] [xbp-48h]
  _BYTE v23[7]; // [xsp+50h] [xbp-40h]
  __int64 v24; // [xsp+58h] [xbp-38h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( lpsrc == (const char **)&`typeinfo for'decltype(nullptr) )
  {
    *a3 = nullptr;
    return (void (__fastcall **)(std::type_info *__hidden))(&dword_0 + 1);
  }
  if ( (*(_BYTE *)(a1 + 16) & 0x18) != 0 )
  {
LABEL_3:
    if ( strcmp(*(const char **)(a1 + 8), lpsrc[1]) )
      goto LABEL_4;
LABEL_20:
    if ( *a3 )
    {
      v13 = (_QWORD *)**a3;
LABEL_22:
      *a3 = v13;
    }
    return (void (__fastcall **)(std::type_info *__hidden))(&dword_0 + 1);
  }
  if ( !lpsrc )
    return nullptr;
  v12 = _dynamic_cast(
          lpsrc,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
          0);
  if ( v12 )
  {
    if ( (v12[16] & 0x18) != 0 )
      goto LABEL_3;
    if ( (const char **)a1 == lpsrc )
      goto LABEL_20;
  }
LABEL_4:
  result = (void (__fastcall **)(std::type_info *__hidden))_dynamic_cast(
                                                             lpsrc,
                                                             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                                                             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
                                                             0);
  if ( !result )
    return result;
  v7 = result;
  if ( *a3 )
    *a3 = (_QWORD *)**a3;
  v8 = *((_DWORD *)result + 4);
  v9 = *(_DWORD *)(a1 + 16);
  if ( ((unsigned __int8)v8 & (unsigned __int8)~(_BYTE)v9 & 7) != 0
    || ((unsigned __int8)v9 & (unsigned __int8)~(_BYTE)v8 & 0x60) != 0 )
  {
    return nullptr;
  }
  result = *(void (__fastcall ***)(std::type_info *__hidden))(a1 + 24);
  v10 = (void (__fastcall **)(std::type_info *__hidden))v7[3];
  if ( result == v10 )
    return (void (__fastcall **)(std::type_info *__hidden))(&dword_0 + 1);
  if ( result == &`typeinfo for'void )
  {
    if ( v10 )
      return (void (__fastcall **)(std::type_info *__hidden))(_dynamic_cast(
                                                                v7[3],
                                                                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                                                                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
                                                                0) == nullptr);
    return (void (__fastcall **)(std::type_info *__hidden))(&dword_0 + 1);
  }
  if ( !result )
    return result;
  v11 = _dynamic_cast(
          result,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
          0);
  if ( v11 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      return (void (__fastcall **)(std::type_info *__hidden))((unsigned __int64)sub_D85FC(v11, v7[3]) & 1);
    return nullptr;
  }
  result = *(void (__fastcall ***)(std::type_info *__hidden))(a1 + 24);
  if ( !result )
    return result;
  v14 = _dynamic_cast(
          result,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( !v14 )
  {
    result = *(void (__fastcall ***)(std::type_info *__hidden))(a1 + 24);
    if ( !result )
      return result;
    result = (void (__fastcall **)(std::type_info *__hidden))_dynamic_cast(
                                                               result,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
                                                               0);
    if ( !result )
      return result;
    v15 = result;
    result = (void (__fastcall **)(std::type_info *__hidden))v7[3];
    if ( !result )
      return result;
    result = (void (__fastcall **)(std::type_info *__hidden))_dynamic_cast(
                                                               result,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
                                                               0);
    if ( !result )
      return result;
    v17[0] = result;
    v17[1] = 0;
    v17[2] = v15;
    v17[3] = -1;
    *(_DWORD *)&v23[3] = 0;
    v18 = nullptr;
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v20 = 0;
    *(_DWORD *)v23 = 1;
    (*((void (__fastcall **)(void (__fastcall **)(std::type_info *__hidden), _QWORD *, _QWORD, __int64))*result + 7))(
      result,
      v17,
      *a3,
      1);
    if ( (_DWORD)v20 != 1 )
      return nullptr;
    if ( *a3 )
    {
      v13 = v18;
      goto LABEL_22;
    }
    return (void (__fastcall **)(std::type_info *__hidden))(&dword_0 + 1);
  }
  if ( (*(_BYTE *)(a1 + 16) & 1) == 0 )
    return nullptr;
  v16 = v14;
  result = (void (__fastcall **)(std::type_info *__hidden))v7[3];
  if ( result )
  {
    result = (void (__fastcall **)(std::type_info *__hidden))_dynamic_cast(
                                                               result,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                                                               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                                                               0);
    if ( result )
    {
      if ( ((_DWORD)result[2] & ~*((_DWORD *)v16 + 4)) == 0
        && (void (__fastcall *)(std::type_info *__hidden))v16[3] == result[3] )
      {
        return (void (__fastcall **)(std::type_info *__hidden))(v16[4] == (_QWORD)result[4]);
      }
      return nullptr;
    }
  }
  return result;
}
// 0: using guessed type int dword_0;
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160710: using guessed type __int64 *`typeinfo for'__cxxabiv1::__class_type_info;
// 160730: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pbase_type_info;
// 160750: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_type_info;
// 160770: using guessed type __int64 *`typeinfo for'__cxxabiv1::__function_type_info;
// 160790: using guessed type __int64 *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
// 160838: using guessed type void (__fastcall *`typeinfo for'void)(std::type_info *__hidden this);
// 160890: using guessed type void (__fastcall *`typeinfo for'decltype(nullptr))(std::type_info *__hidden this);
