/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100057970
// Address: 0x0000000100057970

//----- (0000000100057970) ----------------------------------------------------
void __noreturn sub_100057970(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_1000041F4((__int64)va);
  _Unwind_Resume(a1);
}
