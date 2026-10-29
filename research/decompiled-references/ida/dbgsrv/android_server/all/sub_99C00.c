/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99C00
// Address: 0x0000000000099C00

//----- (0000000000099C00) ----------------------------------------------------
__int64 sub_99C00(__int64 a1, char *a2, ...)
{
  int v4; // w0
  __int64 v5; // x1
  int v6; // w21
  const char *v7; // x0
  gcc_va_list va1; // [xsp+B0h] [xbp-A0h] BYREF
  gcc_va_list va; // [xsp+D0h] [xbp-80h] BYREF
  gcc_va_list va2; // [xsp+F0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+118h] [xbp-38h]

  va_start(va, a2);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_arg(va, _QWORD);
  va_end(va);
  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 664) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1);
    va_start(va, a2);
    v5 = *(_QWORD *)(a1 + 400);
    v6 = v4;
    va_copy(va1, va);
    if ( v5 && !*(_BYTE *)(v5 + 68) )
    {
      va_copy(va2, va1);
      sub_A5420(0, v5, (__int64)a2, va2);
    }
    else
    {
      va_copy(va2, va1);
      sub_A85A4(0, a2, va2);
    }
    v7 = (const char *)winerr(v6);
    sub_3A0D8(a1, ": %s\n", v7);
  }
  return 0;
}
