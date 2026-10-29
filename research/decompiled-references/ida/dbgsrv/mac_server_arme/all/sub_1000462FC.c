/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000462FC
// Address: 0x00000001000462FC

//----- (00000001000462FC) ----------------------------------------------------
void __noreturn sub_1000462FC(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_100006678(va);
  _Unwind_Resume(a1);
}
