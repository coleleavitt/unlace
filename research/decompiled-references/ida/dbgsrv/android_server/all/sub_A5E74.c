/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5E74
// Address: 0x00000000000A5E74

//----- (00000000000A5E74) ----------------------------------------------------
void sub_A5E74(char *a1, ...)
{
  const char *v1; // x1
  const char *v2; // x1
  gcc_va_list va1; // [xsp+150h] [xbp-80h] BYREF
  void *ptr; // [xsp+170h] [xbp-60h] BYREF
  __int64 v5; // [xsp+178h] [xbp-58h]
  __int64 v6; // [xsp+180h] [xbp-50h]
  gcc_va_list va; // [xsp+188h] [xbp-48h] BYREF

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
  ptr = nullptr;
  v5 = 0;
  v6 = 0;
  va_copy(va1, va);
  sub_4A3C0((__int64)&ptr, a1, (__int128 *)va1);
  if ( v5 )
    v1 = (const char *)ptr;
  else
    v1 = &byte_F154B;
  sub_A84C8("%s\n", v1);
  if ( v5 )
    v2 = (const char *)ptr;
  else
    v2 = &byte_F154B;
  sub_4EC28((__int64)"%s", v2);
  if ( ptr )
  {
    v5 = 0;
    qfree(ptr);
  }
}
// F154B: using guessed type char byte_F154B;
