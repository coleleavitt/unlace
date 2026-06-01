/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D3F8
// Address: 0x000000000008D3F8

//----- (000000000008D3F8) ----------------------------------------------------
__int64 sub_8D3F8(__int64 a1, char *a2, ...)
{
  gcc_va_list va1; // [xsp+C0h] [xbp-70h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-48h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  return sub_A3354(a1, a2, (__int128 *)va1);
}
