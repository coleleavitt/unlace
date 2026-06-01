/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A0D8
// Address: 0x000000000003A0D8

//----- (000000000003A0D8) ----------------------------------------------------
__int64 sub_3A0D8(__int64 a1, char *a2, ...)
{
  __int64 v3; // x1
  gcc_va_list va1; // [xsp+C0h] [xbp-70h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-48h] BYREF

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_QWORD *)(a1 + 400);
  va_copy(va1, va);
  return sub_99B90(0, v3, a2, va1);
}
