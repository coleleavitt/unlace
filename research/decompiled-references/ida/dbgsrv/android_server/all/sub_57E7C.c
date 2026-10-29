/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57E7C
// Address: 0x0000000000057E7C

//----- (0000000000057E7C) ----------------------------------------------------
__int64 sub_57E7C(__int64 a1, ...)
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
  return callui(24, 5, a1);
}
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
