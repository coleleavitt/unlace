/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF6A0
// Address: 0x000BF6A0

//----- (000BF6A0) --------------------------------------------------------
char __cdecl sub_BF6A0(int a1, const char **lpsrc, _DWORD *a3)
{
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  char result; // al
  _BYTE *v8; // eax
  bool v9; // zf
  int (__cdecl **v10)(std::type_info *); // edx
  int (__cdecl **v11)(std::type_info *); // ecx
  _DWORD *v12; // eax
  const void *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  const void *v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // eax
  const void *v19; // eax
  void *v20; // eax
  const void *v21; // eax
  void *v22; // eax
  void *v23; // [esp+Ch] [ebp-50h]
  _DWORD v24[4]; // [esp+10h] [ebp-4Ch] BYREF
  int v25; // [esp+20h] [ebp-3Ch]
  int v26; // [esp+24h] [ebp-38h]
  int v27; // [esp+28h] [ebp-34h]
  int v28; // [esp+2Ch] [ebp-30h]
  int v29; // [esp+30h] [ebp-2Ch]
  int v30; // [esp+34h] [ebp-28h]
  int v31; // [esp+38h] [ebp-24h]
  int v32; // [esp+3Ch] [ebp-20h]
  _DWORD v33[7]; // [esp+40h] [ebp-1Ch]

  if ( lpsrc == (const char **)&`typeinfo for'decltype(nullptr) )
  {
    *a3 = 0;
    return 1;
  }
  v3 = a1;
  if ( (*(_BYTE *)(a1 + 8) & 0x18) != 0 )
    goto LABEL_3;
  if ( !lpsrc )
    return 0;
  v8 = _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
         0);
  if ( v8 )
  {
    v9 = (v8[8] & 0x18) == 0;
    v3 = a1;
    if ( v9 )
    {
      if ( (const char **)a1 != lpsrc )
        goto LABEL_4;
      goto LABEL_16;
    }
LABEL_3:
    if ( strcmp(*(const char **)(v3 + 4), lpsrc[1]) )
      goto LABEL_4;
LABEL_16:
    result = 1;
    if ( *a3 )
      *a3 = *(_DWORD *)*a3;
    return result;
  }
LABEL_4:
  v4 = _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
         0);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *a3 )
    *a3 = *(_DWORD *)*a3;
  v6 = v4[2];
  if ( ((unsigned __int8)v6 & (unsigned __int8)~*(_BYTE *)(a1 + 8) & 7) != 0
    || (*(_BYTE *)(a1 + 8) & (unsigned __int8)~(_BYTE)v6 & 0x60) != 0 )
  {
    return 0;
  }
  v10 = *(int (__cdecl ***)(std::type_info *))(a1 + 12);
  v11 = (int (__cdecl **)(std::type_info *))v5[3];
  result = 1;
  if ( v10 != v11 )
  {
    if ( v10 == &`typeinfo for'void )
    {
      if ( v11 )
        return _dynamic_cast(
                 v11,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
                 0) == nullptr;
    }
    else
    {
      if ( !v10 )
        return 0;
      v12 = _dynamic_cast(
              v10,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
              0);
      if ( v12 )
      {
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
          return sub_BF9F0(v12, (void *)v5[3]);
        return 0;
      }
      v13 = *(const void **)(a1 + 12);
      if ( !v13 )
        return 0;
      v14 = _dynamic_cast(
              v13,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
              0);
      if ( v14 )
      {
        v15 = v14;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          v16 = (const void *)v5[3];
          if ( v16 )
          {
            v17 = v15;
            v18 = _dynamic_cast(
                    v16,
                    (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                    (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                    0);
            if ( v18 )
            {
              if ( (~v17[2] & v18[2]) == 0 && v17[3] == v18[3] )
                return v17[4] == v18[4];
              return 0;
            }
          }
        }
        return 0;
      }
      v19 = *(const void **)(a1 + 12);
      if ( !v19 )
        return 0;
      v20 = _dynamic_cast(
              v19,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
              0);
      if ( !v20 )
        return 0;
      v23 = v20;
      v21 = (const void *)v5[3];
      if ( !v21 )
        return 0;
      v22 = _dynamic_cast(
              v21,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
              (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__class_type_info,
              0);
      if ( !v22 )
        return 0;
      v24[0] = v22;
      v24[1] = 0;
      v24[2] = v23;
      v24[3] = -1;
      *(_DWORD *)((char *)v33 + 3) = 0;
      v26 = 0;
      v25 = 0;
      v28 = 0;
      v27 = 0;
      v30 = 0;
      v29 = 0;
      v32 = 0;
      v31 = 0;
      v33[0] = 1;
      (*(void (__cdecl **)(void *, _DWORD *, _DWORD, int))(*(_DWORD *)v22 + 28))(v22, v24, *a3, 1);
      if ( v27 != 1 )
        return 0;
      result = 1;
      if ( *a3 )
        *a3 = v25;
    }
  }
  return result;
}
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139458: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__class_type_info)(std::type_info *);
// 139468: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *);
// 139478: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_type_info)(std::type_info *);
// 139488: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__function_type_info)(std::type_info *);
// 139498: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *);
// 1394F0: using guessed type int (__cdecl *`typeinfo for'void)(std::type_info *);
// 139518: using guessed type int (__cdecl *`typeinfo for'decltype(nullptr))(std::type_info *);
