/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000345C8
// Address: 0x00000001000345C8

//----- (00000001000345C8) ----------------------------------------------------
void __noreturn sub_1000345C8(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_10000ADD0(va);
  _Unwind_Resume(a1);
}
