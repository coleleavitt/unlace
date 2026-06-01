/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B03C
// Address: 0x000000010004B03C

//----- (000000010004B03C) ----------------------------------------------------
void __noreturn sub_10004B03C(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_1000017A4((__int64 *)va);
  _Unwind_Resume(a1);
}
