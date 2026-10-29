/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFB70
// Address: 0x000BFB70

//----- (000BFB70) --------------------------------------------------------
bool __cdecl sub_BFB70(int a1, const char **lpsrc, int **a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  const void *v6; // eax
  bool v7; // zf
  int *v8; // eax
  _BYTE *v9; // eax

  if ( lpsrc != (const char **)&`typeinfo for'decltype(nullptr) )
  {
    if ( (*(_BYTE *)(a1 + 8) & 0x18) != 0 )
      goto LABEL_23;
    if ( !lpsrc )
      return 0;
    v9 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
           0);
    if ( !v9 )
    {
LABEL_4:
      v3 = _dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
             0);
      if ( v3 )
      {
        v4 = v3[2];
        if ( ((unsigned __int8)v4 & (unsigned __int8)~*(_BYTE *)(a1 + 8) & 7) == 0
          && ((unsigned __int8)*(_DWORD *)(a1 + 8) & (unsigned __int8)~(_BYTE)v4 & 0x60) == 0
          && *(_DWORD *)(a1 + 12) == v3[3] )
        {
          return *(_DWORD *)(a1 + 16) == v3[4];
        }
      }
      return 0;
    }
    if ( (v9[8] & 0x18) != 0 )
    {
LABEL_23:
      if ( strcmp(*(const char **)(a1 + 4), lpsrc[1]) )
        goto LABEL_4;
    }
    else if ( (const char **)a1 != lpsrc )
    {
      goto LABEL_4;
    }
    return 1;
  }
  v6 = *(const void **)(a1 + 12);
  if ( v6 )
  {
    v7 = _dynamic_cast(
           v6,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
           0) == nullptr;
    v8 = dword_109630;
    if ( v7 )
      v8 = dword_109638;
  }
  else
  {
    v8 = dword_109638;
  }
  *a3 = v8;
  return 1;
}
// 109630: using guessed type int dword_109630[2];
// 109638: using guessed type int dword_109638[2];
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139468: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *);
// 139488: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__function_type_info)(std::type_info *);
// 139498: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *);
// 139518: using guessed type int (__cdecl *`typeinfo for'decltype(nullptr))(std::type_info *);
