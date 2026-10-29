/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0F10
// Address: 0x00000000000D0F10

//----- (00000000000D0F10) ----------------------------------------------------
__int64 __fastcall sub_D0F10(const void *a1, const void *a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  void *v5; // rax
  _QWORD v7[4]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v8; // [rsp+28h] [rbp-50h]
  _DWORD v9[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a1 == a2 )
    goto LABEL_6;
  if ( !a2 )
    return 0;
  v3 = 0;
  v5 = _dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
         0);
  if ( v5 )
  {
    v7[0] = v5;
    v7[1] = 0;
    v7[2] = a1;
    v7[3] = -1;
    memset(v9, 0, 31);
    v8 = 0;
    v9[6] = 1;
    (*(void (__fastcall **)(void *, _QWORD *, _QWORD, __int64))(*(_QWORD *)v5 + 56LL))(v5, v7, *a3, 1);
    if ( v9[0] == 1 )
    {
      *a3 = v8;
LABEL_6:
      LOBYTE(v3) = 1;
      return v3;
    }
    return 0;
  }
  return v3;
}
// D0FD5: variable 'v3' is possibly undefined
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 150890: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__class_type_info)(std::type_info *__hidden this);
