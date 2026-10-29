/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C524
// Address: 0x000000010002C524

//----- (000000010002C524) ----------------------------------------------------
void __noreturn sub_10002C524(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_100006228((__int64 *)va);
  _Unwind_Resume(a1);
}
