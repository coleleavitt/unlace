/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007FFC
// Address: 0x0000000100007FFC

//----- (0000000100007FFC) ----------------------------------------------------
void __noreturn sub_100007FFC(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000A504((__int64 *)va);
  _Unwind_Resume(a1);
}
