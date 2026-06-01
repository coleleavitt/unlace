/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B464
// Address: 0x000000000006B464

//----- (000000000006B464) ----------------------------------------------------
void __noreturn sub_6B464(__int64 a1, ...)
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
  sub_6C964(a1);
}
