/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DC58
// Address: 0x000000010003DC58

//----- (000000010003DC58) ----------------------------------------------------
void __noreturn sub_10003DC58(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  va_list va; // [xsp+28h] [xbp+28h] BYREF

  va_start(va, a6);
  sub_10003E3A4((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
