/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39FA0
// Address: 0x0000000000039FA0

//----- (0000000000039FA0) ----------------------------------------------------
__int64 sub_39FA0(__int64 a1, ...)
{
  gcc_va_list va; // [xsp+C0h] [xbp-70h] BYREF
  gcc_va_list va1; // [xsp+E0h] [xbp-50h] BYREF
  __int64 v4; // [xsp+108h] [xbp-28h]

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
  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  va_copy(va1, va);
  return callui(23, a1, va1);
}
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
