/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4972C
// Address: 0x000000000004972C

//----- (000000000004972C) ----------------------------------------------------
__int64 sub_4972C(__int64 a1, __int64 a2, ...)
{
  __int64 result; // x0
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
  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_168DDE & 1) != 0 )
  {
    va_start(va, a2);
    va_copy(va1, va);
    return callui(23, a2, va1);
  }
  return result;
}
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
// 168DDE: using guessed type char byte_168DDE;
