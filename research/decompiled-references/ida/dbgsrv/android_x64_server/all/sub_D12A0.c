/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D12A0
// Address: 0x00000000000D12A0

//----- (00000000000D12A0) ----------------------------------------------------
__int64 __fastcall sub_D12A0(__int64 a1, __int64 a2, _QWORD **a3)
{
  unsigned int v3; // r15d
  _DWORD *v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  void (__fastcall **v9)(std::type_info *__hidden); // rax
  void (__fastcall **v10)(std::type_info *__hidden); // rdi
  _DWORD *v11; // rax
  _BYTE *v13; // rax
  _QWORD *v14; // rax
  const void *v15; // rdi
  _QWORD *v16; // rax
  const void *v17; // rdi
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  const void *v20; // rdi
  void *v21; // rax
  const void *v22; // rdi
  void *v23; // rbx
  void *v24; // rax
  _QWORD v25[4]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v26; // [rsp+28h] [rbp-60h]
  _DWORD v27[8]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( (void (__fastcall **)(std::type_info *__hidden))a2 == &`typeinfo for'decltype(nullptr) )
  {
    *a3 = nullptr;
    LOBYTE(v3) = 1;
    return v3;
  }
  if ( (*(_BYTE *)(a1 + 16) & 0x18) != 0 )
    goto LABEL_3;
  if ( !a2 )
    return 0;
  v13 = _dynamic_cast(
          (const void *)a2,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
          0);
  if ( v13 )
  {
    if ( (v13[16] & 0x18) == 0 )
    {
      if ( a1 != a2 )
        goto LABEL_4;
      goto LABEL_20;
    }
LABEL_3:
    if ( strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) )
      goto LABEL_4;
LABEL_20:
    LOBYTE(v3) = 1;
    if ( !*a3 )
      return v3;
    v14 = (_QWORD *)**a3;
LABEL_22:
    *a3 = v14;
    return v3;
  }
LABEL_4:
  v3 = 0;
  v6 = _dynamic_cast(
         (const void *)a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
         0);
  if ( !v6 )
    return v3;
  v7 = v6;
  if ( *a3 )
    *a3 = (_QWORD *)**a3;
  v8 = v6[4];
  if ( ((unsigned __int8)v8 & (unsigned __int8)~*(_BYTE *)(a1 + 16) & 7) != 0
    || ((unsigned __int8)*(_DWORD *)(a1 + 16) & (unsigned __int8)~(_BYTE)v8 & 0x60) != 0 )
  {
    return 0;
  }
  v9 = *(void (__fastcall ***)(std::type_info *__hidden))(a1 + 24);
  v10 = *((void (__fastcall ***)(std::type_info *__hidden))v7 + 3);
  LOBYTE(v3) = 1;
  if ( v9 == v10 )
    return v3;
  if ( v9 == &`typeinfo for'void )
  {
    if ( v10 )
      LOBYTE(v3) = _dynamic_cast(
                     v10,
                     (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                     (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
                     0) == nullptr;
    return v3;
  }
  if ( !v9 )
    return 0;
  v11 = _dynamic_cast(
          *(const void **)(a1 + 24),
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
          0);
  if ( v11 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      return sub_D15E0(v11, *((const void **)v7 + 3));
    return 0;
  }
  v15 = *(const void **)(a1 + 24);
  if ( !v15 )
    return 0;
  v16 = _dynamic_cast(
          v15,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( !v16 )
  {
    v20 = *(const void **)(a1 + 24);
    if ( !v20 )
      return 0;
    v3 = 0;
    v21 = _dynamic_cast(
            v20,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
            0);
    if ( !v21 )
      return v3;
    v22 = *((const void **)v7 + 3);
    if ( !v22 )
      return 0;
    v23 = v21;
    v3 = 0;
    v24 = _dynamic_cast(
            v22,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
            0);
    if ( !v24 )
      return v3;
    v25[0] = v24;
    v25[1] = 0;
    v25[2] = v23;
    v25[3] = -1;
    memset(v27, 0, 31);
    v26 = 0;
    v27[6] = 1;
    (*(void (__fastcall **)(void *, _QWORD *, _QWORD, __int64))(*(_QWORD *)v24 + 56LL))(v24, v25, *a3, 1);
    if ( v27[0] != 1 )
      return 0;
    LOBYTE(v3) = 1;
    if ( !*a3 )
      return v3;
    v14 = (_QWORD *)v26;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(a1 + 16) & 1) == 0 )
    return 0;
  v17 = *((const void **)v7 + 3);
  if ( !v17 )
    return 0;
  v18 = v16;
  v3 = 0;
  v19 = _dynamic_cast(
          v17,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( v19 )
  {
    if ( (~*((_DWORD *)v18 + 4) & (_DWORD)v19[2]) == 0 && v18[3] == v19[3] )
    {
      LOBYTE(v3) = v18[4] == v19[4];
      return v3;
    }
    return 0;
  }
  return v3;
}
// D15BC: variable 'v3' is possibly undefined
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 150890: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__class_type_info)(std::type_info *__hidden this);
// 1508B0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *__hidden this);
// 1508D0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_type_info)(std::type_info *__hidden this);
// 1508F0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__function_type_info)(std::type_info *__hidden this);
// 150910: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *__hidden this);
// 1509B8: using guessed type void (__fastcall *`typeinfo for'void)(std::type_info *__hidden this);
// 150A10: using guessed type void (__fastcall *`typeinfo for'decltype(nullptr))(std::type_info *__hidden this);
