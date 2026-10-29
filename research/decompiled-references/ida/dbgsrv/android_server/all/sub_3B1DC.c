/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B1DC
// Address: 0x000000000003B1DC

//----- (000000000003B1DC) ----------------------------------------------------
void sub_3B1DC(char *a1, ...)
{
  FILE *v1; // x0
  int v2; // w1
  __int64 v3; // x2
  gcc_va_list va; // [xsp+C0h] [xbp-30h] BYREF

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
  v1 = verror(a1, va);
  sub_3B234((__int64)v1, v2, v3);
}
// 3B231: variable 'v2' is possibly undefined
// 3B231: variable 'v3' is possibly undefined
