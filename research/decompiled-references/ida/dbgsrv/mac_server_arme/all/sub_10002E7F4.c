/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E7F4
// Address: 0x000000010002E7F4

//----- (000000010002E7F4) ----------------------------------------------------
void __noreturn sub_10002E7F4(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10002E808((__int64)va);
  _Unwind_Resume(a1);
}
