/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FDD4
// Address: 0x000000010005FDD4

//----- (000000010005FDD4) ----------------------------------------------------
void __noreturn sub_10005FDD4(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10005FE08((__int64)va);
  _Unwind_Resume(a1);
}
