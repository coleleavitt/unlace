/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BDE0
// Address: 0x000000000005BDE0

//----- (000000000005BDE0) ----------------------------------------------------
void __noreturn sub_5BDE0(__int64 a1, ...)
{
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
  vloader_failure(a1);
}
