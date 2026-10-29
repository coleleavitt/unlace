/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96518
// Address: 0x0000000000096518

//----- (0000000000096518) ----------------------------------------------------
__int64 sub_96518(char *a1, ...)
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
  return qvprintf(a1, va1);
}
