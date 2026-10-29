/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1770
// Address: 0x00000000000D1770

//----- (00000000000D1770) ----------------------------------------------------
__int64 __fastcall sub_D1770(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 **v3; // r15
  _DWORD *v4; // rax
  int v5; // ecx
  const void *v6; // rdi
  bool v7; // zf
  __int64 *v8; // rax
  _BYTE *v9; // rax

  if ( (void (__fastcall **)(std::type_info *__hidden))a2 == &`typeinfo for'decltype(nullptr) )
  {
    v3 = a3;
    v6 = *(const void **)(a1 + 24);
    if ( v6 )
    {
      v7 = _dynamic_cast(
             v6,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
             (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__function_type_info,
             0) == nullptr;
      v8 = qword_118D10;
      if ( v7 )
        v8 = qword_118D20;
    }
    else
    {
      v8 = qword_118D20;
    }
    *v3 = v8;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(a1 + 16) & 0x18) != 0 )
    goto LABEL_3;
  if ( !a2 )
    goto LABEL_18;
  v9 = _dynamic_cast(
         (const void *)a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
         0);
  if ( !v9 )
    goto LABEL_4;
  if ( (v9[16] & 0x18) != 0 )
  {
LABEL_3:
    if ( !strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) )
    {
LABEL_21:
      LOBYTE(v3) = 1;
      return (unsigned int)v3;
    }
  }
  else if ( a1 == a2 )
  {
    goto LABEL_21;
  }
LABEL_4:
  LODWORD(v3) = 0;
  v4 = _dynamic_cast(
         (const void *)a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v4 )
  {
    v5 = v4[4];
    if ( ((unsigned __int8)v5 & (unsigned __int8)~*(_BYTE *)(a1 + 16) & 7) == 0
      && ((unsigned __int8)*(_DWORD *)(a1 + 16) & (unsigned __int8)~(_BYTE)v5 & 0x60) == 0
      && *(_QWORD *)(a1 + 24) == *((_QWORD *)v4 + 3) )
    {
      LOBYTE(v3) = *(_QWORD *)(a1 + 32) == *((_QWORD *)v4 + 4);
      return (unsigned int)v3;
    }
LABEL_18:
    LODWORD(v3) = 0;
  }
  return (unsigned int)v3;
}
// D1894: variable 'v3' is possibly undefined
// 118D10: using guessed type __int64 qword_118D10[2];
// 118D20: using guessed type __int64 qword_118D20[2];
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 1508B0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *__hidden this);
// 1508F0: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__function_type_info)(std::type_info *__hidden this);
// 150910: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *__hidden this);
// 150A10: using guessed type void (__fastcall *`typeinfo for'decltype(nullptr))(std::type_info *__hidden this);
