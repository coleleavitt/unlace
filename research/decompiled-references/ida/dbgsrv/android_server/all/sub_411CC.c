/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411CC
// Address: 0x00000000000411CC

//----- (00000000000411CC) ----------------------------------------------------
__int64 sub_411CC(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, ...)
{
  gcc_va_list va1; // [xsp+C0h] [xbp-70h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-48h] BYREF

  va_start(va, a3);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  return vshow_hex(a1, a2, a3, va1);
}
