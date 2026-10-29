/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99D18
// Address: 0x0000000000099D18

//----- (0000000000099D18) ----------------------------------------------------
__int64 sub_99D18(__int64 result, char *a2, ...)
{
  __int64 v3; // x1
  gcc_va_list va1; // [xsp+B0h] [xbp-90h] BYREF
  gcc_va_list va; // [xsp+D0h] [xbp-70h] BYREF
  gcc_va_list va2; // [xsp+F0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+118h] [xbp-28h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(result + 664) )
  {
    va_start(va, a2);
    v3 = *(_QWORD *)(result + 400);
    va_copy(va1, va);
    if ( v3 && !*(_BYTE *)(v3 + 68) )
    {
      va_copy(va2, va1);
      return sub_A5420(0, v3, (__int64)a2, va2);
    }
    else
    {
      va_copy(va2, va1);
      return sub_A85A4(0, a2, va2);
    }
  }
  return result;
}
