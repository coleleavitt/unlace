/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91438
// Address: 0x00091438

//----- (00091438) --------------------------------------------------------
bool __fastcall sub_91438(int a1, void *lpsrc)
{
  _BOOL4 v4; // r2
  _BYTE *v5; // r0

  if ( (*(_BYTE *)(a1 + 8) & 0x18) != 0 )
  {
    v4 = 1;
    return sub_91274(a1, (int)lpsrc, v4);
  }
  if ( lpsrc )
  {
    v5 = _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
           0);
    if ( v5 )
    {
      v4 = (v5[8] & 0x18) != 0;
      return sub_91274(a1, (int)lpsrc, v4);
    }
  }
  return 0;
}
// DB408: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__shim_type_info;
// DB420: using guessed type _UNKNOWN *`typeinfo for'__cxxabiv1::__pbase_type_info;
