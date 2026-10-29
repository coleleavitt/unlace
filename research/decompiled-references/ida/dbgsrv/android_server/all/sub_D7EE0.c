/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7EE0
// Address: 0x00000000000D7EE0

//----- (00000000000D7EE0) ----------------------------------------------------
void *__fastcall sub_D7EE0(void *a1, void *lpsrc, _QWORD *a3)
{
  void *result; // x0
  _QWORD v6[4]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v7; // [xsp+28h] [xbp-58h]
  __int64 v8; // [xsp+30h] [xbp-50h]
  __int64 v9; // [xsp+38h] [xbp-48h]
  __int64 v10; // [xsp+40h] [xbp-40h]
  __int64 v11; // [xsp+48h] [xbp-38h]
  _BYTE v12[7]; // [xsp+50h] [xbp-30h]
  __int64 v13; // [xsp+58h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 == lpsrc )
    return &dword_0 + 1;
  if ( lpsrc )
  {
    result = _dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
               0);
    if ( !result )
      return result;
    v6[0] = result;
    v6[1] = 0;
    v6[2] = a1;
    v6[3] = -1;
    *(_DWORD *)&v12[3] = 0;
    v7 = 0;
    v8 = 0;
    v10 = 0;
    v11 = 0;
    v9 = 0;
    *(_DWORD *)v12 = 1;
    (*(void (__fastcall **)(void *, _QWORD *, _QWORD, __int64))(*(_QWORD *)result + 56LL))(result, v6, *a3, 1);
    if ( (_DWORD)v9 == 1 )
    {
      *a3 = v7;
      return &dword_0 + 1;
    }
  }
  return nullptr;
}
// 0: using guessed type int dword_0;
// 1606F0: using guessed type __int64 *`typeinfo for'__cxxabiv1::__shim_type_info;
// 160710: using guessed type __int64 *`typeinfo for'__cxxabiv1::__class_type_info;
