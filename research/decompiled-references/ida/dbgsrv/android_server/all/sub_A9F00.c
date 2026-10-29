/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9F00
// Address: 0x00000000000A9F00

//----- (00000000000A9F00) ----------------------------------------------------
pthread_mutex_t *sub_A9F00(unsigned int a1, char *a2, ...)
{
  _OWORD *v3; // x1
  FILE *v4; // x0
  gcc_va_list va1; // [xsp+B0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+D0h] [xbp-40h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  va_copy(va1, va);
  sub_A8444(a2, va1);
  v4 = qexit((pthread_mutex_t *)a1, v3);
  return sub_A9F74(v4);
}
// A9F70: variable 'v3' is possibly undefined
