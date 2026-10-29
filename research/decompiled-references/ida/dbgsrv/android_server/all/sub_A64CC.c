/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A64CC
// Address: 0x00000000000A64CC

//----- (00000000000A64CC) ----------------------------------------------------
__int64 sub_A64CC(__int64 a1, ...)
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
  return callui(23, a1, va1);
}
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
