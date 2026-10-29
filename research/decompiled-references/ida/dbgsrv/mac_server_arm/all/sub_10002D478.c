/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D478
// Address: 0x000000010002D478

//----- (000000010002D478) ----------------------------------------------------
void __noreturn sub_10002D478(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10002D48C((__int64)va);
  _Unwind_Resume(a1);
}
