/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D15E0
// Address: 0x00000000000D15E0

//----- (00000000000D15E0) ----------------------------------------------------
__int64 __fastcall sub_D15E0(_DWORD *a1, const void *a2)
{
  const void *v2; // rdx
  unsigned int v4; // r15d
  const void **v5; // rax
  const void **v6; // rbx
  int v7; // eax
  const void *v8; // rdi
  _DWORD *v9; // rax
  const void *v10; // rdi
  _QWORD *v11; // rax
  const void *v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v14; // rax

  if ( a2 )
  {
    v2 = a2;
    while ( 1 )
    {
      v4 = 0;
      v5 = (const void **)_dynamic_cast(
                            v2,
                            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                            (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
                            0);
      if ( !v5 )
        break;
      v6 = v5;
      v7 = a1[4];
      if ( (~v7 & (_DWORD)v6[2]) != 0 )
        return 0;
      v8 = *((const void **)a1 + 3);
      if ( v8 == v6[3] )
      {
        LOBYTE(v4) = 1;
        return v4;
      }
      v4 = 0;
      if ( (v7 & 1) == 0 || !v8 )
        return v4;
      v9 = _dynamic_cast(
             v8,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
             0);
      if ( !v9 )
      {
        v10 = *((const void **)a1 + 3);
        if ( !v10 )
          return 0;
        v4 = 0;
        v11 = _dynamic_cast(
                v10,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                0);
        if ( !v11 )
          return v4;
        v12 = v6[3];
        if ( !v12 )
          return 0;
        v13 = v11;
        v4 = 0;
        v14 = _dynamic_cast(
                v12,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                0);
        if ( !v14 )
          return v4;
        if ( (~*((_DWORD *)v13 + 4) & (_DWORD)v14[2]) == 0 && v13[3] == v14[3] )
        {
          LOBYTE(v4) = v13[4] == v14[4];
          return v4;
        }
        return 0;
      }
      v2 = v6[3];
      a1 = v9;
      if ( !v2 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 1508D0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_type_info)(std::type_info *__hidden this);
// 150910: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *__hidden this);
