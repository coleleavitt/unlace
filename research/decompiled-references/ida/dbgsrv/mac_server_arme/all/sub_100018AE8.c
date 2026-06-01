/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018AE8
// Address: 0x0000000100018AE8

//----- (0000000100018AE8) ----------------------------------------------------
void __noreturn sub_100018AE8(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_10000B7DC((char **)va);
  _Unwind_Resume(a1);
}
