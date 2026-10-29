/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002355C
// Address: 0x000000010002355C

//----- (000000010002355C) ----------------------------------------------------
void __noreturn sub_10002355C(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000ADD0((__int64 *)va);
  _Unwind_Resume(a1);
}
