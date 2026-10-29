/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013518
// Address: 0x0000000100013518

//----- (0000000100013518) ----------------------------------------------------
void __noreturn sub_100013518(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_10000A550((__int64 *)va);
  _Unwind_Resume(a1);
}
