/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013050
// Address: 0x0000000100013050

//----- (0000000100013050) ----------------------------------------------------
void __noreturn sub_100013050(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [xsp+18h] [xbp+18h] BYREF

  va_start(va, a4);
  sub_10000A550((__int64 *)va);
  _Unwind_Resume(a1);
}
