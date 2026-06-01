/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066004
// Address: 0x0000000100066004

//----- (0000000100066004) ----------------------------------------------------
void __noreturn sub_100066004(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100006678((__int64 *)va);
  _Unwind_Resume(a1);
}
