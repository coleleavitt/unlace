/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000331C4
// Address: 0x00000001000331C4

//----- (00000001000331C4) ----------------------------------------------------
void __noreturn sub_1000331C4(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_100006228(va);
  _Unwind_Resume(a1);
}
