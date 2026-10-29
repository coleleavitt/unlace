/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A84C8
// Address: 0x00000000000A84C8

//----- (00000000000A84C8) ----------------------------------------------------
__int64 sub_A84C8(char *a1, ...)
{
  void **p_pad1; // x20
  unsigned int v2; // w19
  gcc_va_list va; // [xsp+C0h] [xbp-80h] BYREF
  gcc_va_list va1; // [xsp+E0h] [xbp-60h] BYREF
  __int64 v6; // [xsp+108h] [xbp-38h]

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
  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qword_166CC8 )
    p_pad1 = (void **)qword_166CC8;
  else
    p_pad1 = &_sF.__pad1;
  va_copy(va1, va);
  v2 = qvfprintf((FILE *)p_pad1, a1, va1);
  fflush((FILE *)p_pad1);
  return v2;
}
// 166CC8: using guessed type __int64 qword_166CC8;
// 169790: using guessed type FILE _sF;
