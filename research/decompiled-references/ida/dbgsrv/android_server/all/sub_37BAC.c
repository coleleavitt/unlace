/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37BAC
// Address: 0x0000000000037BAC

//----- (0000000000037BAC) ----------------------------------------------------
__int64 sub_37BAC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  gcc_va_list va1; // [xsp+B0h] [xbp-70h] BYREF
  gcc_va_list va; // [xsp+D8h] [xbp-48h] BYREF

  va_start(va, a4);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a4);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  return __vsnprintf_chk(a1, a3, 0, a2, a4, va1);
}
// 373F0: using guessed type __int64 __fastcall __vsnprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
