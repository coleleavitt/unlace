/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100073334
// Address: 0x0000000100073334

//----- (0000000100073334) ----------------------------------------------------
void __noreturn sub_100073334(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_100072EF4((__int64 *)va);
  _Unwind_Resume(a1);
}
