/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C334
// Address: 0x000000010006C334

//----- (000000010006C334) ----------------------------------------------------
void __noreturn sub_10006C334(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000A550((__int64 *)va);
  _Unwind_Resume(a1);
}
