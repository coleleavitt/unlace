/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000647A4
// Address: 0x00000001000647A4

//----- (00000001000647A4) ----------------------------------------------------
void __noreturn sub_1000647A4(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_1000647B8((__int64)va);
  _Unwind_Resume(a1);
}
