/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x00000000000C6954

//----- (00000000000C6954) ----------------------------------------------------
__int64 qsscanf(const char *a1, char *a2, ...)
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
  return qvsscanf(a1, a2, va1);
}
