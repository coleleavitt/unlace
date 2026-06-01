/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FB94
// Address: 0x000000010001FB94

//----- (000000010001FB94) ----------------------------------------------------
void __noreturn sub_10001FB94(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_100006228((__int64 *)va);
  _Unwind_Resume(a1);
}
