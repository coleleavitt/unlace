/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF9F0
// Address: 0x000BF9F0

//----- (000BF9F0) --------------------------------------------------------
bool __cdecl sub_BF9F0(_DWORD *a1, void *lpsrc)
{
  const void *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // edx
  const void *v7; // ecx
  bool result; // al
  _DWORD *v9; // eax
  const void *v10; // eax
  _DWORD *v11; // eax
  const void *v12; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // eax

  for ( i = lpsrc; i; a1 = v9 )
  {
    v4 = _dynamic_cast(
           i,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v4 )
      break;
    v5 = v4;
    v6 = a1[2];
    if ( (~v6 & v4[2]) != 0 )
      break;
    v7 = (const void *)a1[3];
    if ( v7 == (const void *)v4[3] )
      return 1;
    result = 0;
    if ( (v6 & 1) == 0 || !v7 )
      return result;
    v9 = _dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v9 )
    {
      v10 = (const void *)a1[3];
      if ( v10 )
      {
        v11 = _dynamic_cast(
                v10,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                0);
        if ( v11 )
        {
          v12 = (const void *)v5[3];
          if ( v12 )
          {
            v13 = v11;
            v14 = _dynamic_cast(
                    v12,
                    (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                    (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                    0);
            if ( v14 )
            {
              if ( (~v13[2] & v14[2]) == 0 && v13[3] == v14[3] )
                return v13[4] == v14[4];
            }
          }
        }
      }
      return 0;
    }
    i = (const void *)v5[3];
  }
  return 0;
}
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139478: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_type_info)(std::type_info *);
// 139498: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *);
