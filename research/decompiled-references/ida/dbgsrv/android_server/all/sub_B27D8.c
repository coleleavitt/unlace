/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B27D8
// Address: 0x00000000000B27D8

//----- (00000000000B27D8) ----------------------------------------------------
__int64 sub_B27D8(char *a1, ...)
{
  gcc_va_list va1; // [xsp+D0h] [xbp-70h] BYREF
  gcc_va_list va; // [xsp+F8h] [xbp-48h] BYREF

  va_start(va, a1);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  return qveprintf(a1, va1);
}
