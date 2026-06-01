/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF620
// Address: 0x000BF620

//----- (000BF620) --------------------------------------------------------
bool __cdecl sub_BF620(const char **a1, const char **lpsrc)
{
  _BYTE *v4; // eax

  if ( ((_BYTE)a1[2] & 0x18) != 0 )
    return strcmp(a1[1], lpsrc[1]) == 0;
  if ( lpsrc )
  {
    v4 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
           0);
    if ( v4 )
    {
      if ( (v4[8] & 0x18) == 0 )
        return a1 == lpsrc;
      return strcmp(a1[1], lpsrc[1]) == 0;
    }
  }
  return 0;
}
// 139448: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__shim_type_info)(std::type_info *);
// 139468: using guessed type int (__cdecl *`typeinfo for'__cxxabiv1::__pbase_type_info)(std::type_info *);
