/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsnprintf
// Address: 0x00000000000C6800

//----- (00000000000C6800) ----------------------------------------------------
size_t qsnprintf(pthread_mutex_t *a1, __int64 a2, char *a3, ...)
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
  return qvsnprintf(a1, a2, a3, va1);
}
