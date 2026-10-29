/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000123A0
// Address: 0x00000001000123A0

//----- (00000001000123A0) ----------------------------------------------------
void __noreturn sub_1000123A0(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  va_list va; // [xsp+28h] [xbp+28h] BYREF

  va_start(va, a6);
  sub_100019758((__int64 *)va);
  _Unwind_Resume(a1);
}
