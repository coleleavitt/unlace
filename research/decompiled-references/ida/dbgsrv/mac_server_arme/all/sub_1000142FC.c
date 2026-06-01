/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000142FC
// Address: 0x00000001000142FC

//----- (00000001000142FC) ----------------------------------------------------
void __noreturn sub_1000142FC(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  va_list va; // [xsp+18h] [xbp+18h] BYREF

  va_start(va, a4);
  sub_10000ADD0((__int64 *)va);
  _Unwind_Resume(a1);
}
