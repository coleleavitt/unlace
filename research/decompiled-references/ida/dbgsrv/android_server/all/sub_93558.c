/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93558
// Address: 0x0000000000093558

//----- (0000000000093558) ----------------------------------------------------
__int64 sub_93558(_BYTE *a1, char *a2, ...)
{
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
  va_copy(va1, va);
  return sub_A6344(1u, a1, a2, va1);
}
