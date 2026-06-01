/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1710
// Address: 0x00000000000D1710

//----- (00000000000D1710) ----------------------------------------------------
__int64 __fastcall sub_D1710(__int64 a1, const void *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  if ( !a2 )
    return 0;
  v2 = 0;
  v3 = _dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v3 )
  {
    if ( (~*(_DWORD *)(a1 + 16) & (_DWORD)v3[2]) == 0 && *(_QWORD *)(a1 + 24) == v3[3] )
    {
      LOBYTE(v2) = *(_QWORD *)(a1 + 32) == v3[4];
      return v2;
    }
    return 0;
  }
  return v2;
}
// 150870: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *__hidden this);
// 150910: using guessed type void (__fastcall *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *__hidden this);
