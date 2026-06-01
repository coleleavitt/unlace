/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EE64
// Address: 0x000000000004EE64

//----- (000000000004EE64) ----------------------------------------------------
bool sub_4EE64(pthread_mutex_t *a1, int a2, ...)
{
  gcc_va_list va1; // [xsp+C0h] [xbp-470h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-448h] BYREF
  char v6[1032]; // [xsp+108h] [xbp-428h] BYREF

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
  sub_4E400(a1, (__int64)v6, 1024, (unsigned int)a2, (unsigned int **)va1);
  sub_4EC28((__int64)"%s", v6);
  return a2 < 19;
}
