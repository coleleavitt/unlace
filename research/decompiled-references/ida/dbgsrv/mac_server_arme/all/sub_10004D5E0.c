/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D5E0
// Address: 0x000000010004D5E0

//----- (000000010004D5E0) ----------------------------------------------------
void __noreturn sub_10004D5E0(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [xsp+18h] [xbp+18h] BYREF

  va_start(va, a4);
  sub_100006678((__int64 *)va);
  _Unwind_Resume(a1);
}
