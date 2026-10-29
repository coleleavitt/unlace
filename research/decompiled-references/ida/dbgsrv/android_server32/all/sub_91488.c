/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91488
// Address: 0x00091488

//----- (00091488) --------------------------------------------------------
bool __fastcall sub_91488(int a1, _UNKNOWN **lpsrc, _DWORD **a3)
{
  _DWORD *v6; // r0
  int v7; // r5
  void *v8; // r0
  void *v9; // r9
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  _UNKNOWN **v14; // r0
  _UNKNOWN **v15; // r1
  _DWORD *v16; // r0
  const void *v17; // r0
  _DWORD *v18; // r0
  const void *v19; // r0
  void *v20; // r0
  void *v21; // r6
  const void *v22; // r0
  void *v23; // r0
  void *v24; // r4
  _DWORD v25[14]; // [sp+0h] [bp-58h] BYREF

  if ( lpsrc == &`typeinfo for'decltype(nullptr) )
  {
    v6 = nullptr;
    goto LABEL_6;
  }
  if ( sub_91438(a1, lpsrc) )
  {
    if ( !*a3 )
      return 1;
    v6 = (_DWORD *)**a3;
LABEL_6:
    *a3 = v6;
    return 1;
  }
  if ( !lpsrc )
    return 0;
  v7 = 0;
  v8 = _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
         0);
  if ( !v8 )
    return v7;
  v9 = v8;
  if ( *a3 )
    *a3 = (_DWORD *)**a3;
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *((_DWORD *)v9 + 2);
  v12 = (v11 & ~v10) << 29 == 0;
  if ( !((v11 & ~v10) << 29) )
    v12 = (v10 & ~v11 & 0x60) == 0;
  if ( !v12 )
    return 0;
  v14 = *((_UNKNOWN ***)v9 + 3);
  v15 = *(_UNKNOWN ***)(a1 + 12);
  if ( v15 == v14 )
    return 1;
  if ( v15 == &`typeinfo for'void )
  {
    if ( v14 )
      return _dynamic_cast(
               v14,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
               (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
               0) == nullptr;
    return 1;
  }
  if ( !v15 )
    return 0;
  v16 = _dynamic_cast(
          *(const void **)(a1 + 12),
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
          0);
  if ( v16 )
  {
    if ( *(unsigned __int8 *)(a1 + 8) << 31 )
      return sub_91670(v16, *((void **)v9 + 3));
    return 0;
  }
  v17 = *(const void **)(a1 + 12);
  if ( !v17 )
    return 0;
  v18 = _dynamic_cast(
          v17,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( !v18 )
  {
    v19 = *(const void **)(a1 + 12);
    if ( v19 )
    {
      v7 = 0;
      v20 = _dynamic_cast(
              v19,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
              0);
      if ( !v20 )
        return v7;
      v21 = v20;
      v22 = *((const void **)v9 + 3);
      if ( v22 )
      {
        v7 = 0;
        v23 = _dynamic_cast(
                v22,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
                0);
        if ( !v23 )
          return v7;
        v24 = v23;
        v25[0] = v23;
        v25[1] = 0;
        v25[2] = v21;
        v25[3] = -1;
        memset(&v25[4], 0, 0x27u);
        v25[12] = 1;
        (*(void (__fastcall **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v24 + 28))(v24, v25, *a3, 1);
        if ( v25[6] != 1 )
          return v7;
        if ( !*a3 )
          return 1;
        v6 = (_DWORD *)v25[4];
        goto LABEL_6;
      }
    }
    return 0;
  }
  if ( !(*(unsigned __int8 *)(a1 + 8) << 31) )
    return 0;
  return sub_91710(v18, *((void **)v9 + 3));
}
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB414: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__class_type_info;
// DB42C: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_type_info;
// DB438: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__function_type_info;
// DB444: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info;
// DB494: using guessed type _UNKNOWN *`typeinfo for'void;
// DB4BC: using guessed type _UNKNOWN *`typeinfo for'decltype(nullptr);
