/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFB00
// Address: 0x000BFB00

//----- (000BFB00) --------------------------------------------------------
bool __cdecl sub_BFB00(_DWORD *a1, void *lpsrc)
{
  _DWORD *v2; // eax

  return lpsrc
      && (v2 = _dynamic_cast(
                 lpsrc,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
                 (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
                 0)) != nullptr
      && (~a1[2] & v2[2]) == 0
      && a1[3] == v2[3]
      && a1[4] == v2[4];
}
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139498: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pointer_to_member_type_info)(std::type_info *);
