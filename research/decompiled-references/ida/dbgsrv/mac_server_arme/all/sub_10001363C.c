/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001363C
// Address: 0x000000010001363C

//----- (000000010001363C) ----------------------------------------------------
void __noreturn sub_10001363C(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  va_list va; // [xsp+28h] [xbp+28h] BYREF

  va_start(va, a6);
  sub_10001B190((__int64 *)va);
  _Unwind_Resume(a1);
}
