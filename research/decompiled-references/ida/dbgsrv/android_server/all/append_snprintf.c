/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: append_snprintf
// Address: 0x00000000000C6890

//----- (00000000000C6890) ----------------------------------------------------
size_t append_snprintf(const char *a1, __int64 a2, char *a3, ...)
{
  pthread_mutex_t *v5; // x0
  gcc_va_list va1; // [xsp+C0h] [xbp-80h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-58h] BYREF

  va_start(va, a3);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v5 = (pthread_mutex_t *)&a1[strlen(a1)];
  if ( a2 - (__int64)v5 < 1 )
    return 0;
  va_copy(va1, va);
  return qvsnprintf(v5, a2 - (_QWORD)v5, a3, va1);
}
