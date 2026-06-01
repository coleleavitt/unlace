/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C1E8
// Address: 0x000000010005C1E8

//----- (000000010005C1E8) ----------------------------------------------------
void __noreturn sub_10005C1E8(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10005C21C((__int64)va);
  _Unwind_Resume(a1);
}
