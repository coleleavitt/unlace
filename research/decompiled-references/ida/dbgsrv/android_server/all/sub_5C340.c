/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C340
// Address: 0x000000000005C340

//----- (000000000005C340) ----------------------------------------------------
__int64 sub_5C340(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [xsp+B0h] [xbp-70h] BYREF
  gcc_va_list va1; // [xsp+D0h] [xbp-50h] BYREF
  __int64 v5; // [xsp+F8h] [xbp-28h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  va_copy(va1, va);
  return callui(28, 0, 0);
}
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
