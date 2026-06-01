/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakepath
// Address: 0x00000000000BBEF0

//----- (00000000000BBEF0) ----------------------------------------------------
char *qmakepath(size_t a1, unsigned __int64 a2, char *a3, ...)
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
  return vqmakepath(a1, a2, a3, (unsigned __int8 ***)va1);
}
