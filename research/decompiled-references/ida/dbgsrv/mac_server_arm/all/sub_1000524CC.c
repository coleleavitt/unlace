/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000524CC
// Address: 0x00000001000524CC

//----- (00000001000524CC) ----------------------------------------------------
void __noreturn sub_1000524CC(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100013FC0((void ***)va);
  _Unwind_Resume(a1);
}
