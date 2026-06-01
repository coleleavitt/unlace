/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x0008FEA4

//----- (0008FEA4) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE'
_DWORD *__fastcall std::runtime_error::runtime_error(_DWORD *a1, unsigned __int8 *a2)
{
  _DWORD *v3; // r0
  char *v4; // r2

  *a1 = &off_DBA84;
  v3 = a1 + 1;
  v4 = *((char **)a2 + 2);
  if ( !(*a2 << 31) )
    v4 = (char *)(a2 + 1);
  sub_8FDAC(v3, v4);
  return a1;
}
// DBA84: using guessed type _UNKNOWN *off_DBA84;
