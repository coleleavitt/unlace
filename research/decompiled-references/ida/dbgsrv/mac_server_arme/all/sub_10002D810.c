/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D810
// Address: 0x000000010002D810

//----- (000000010002D810) ----------------------------------------------------
void __noreturn sub_10002D810(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_100006678((__int64 *)va);
  _Unwind_Resume(a1);
}
