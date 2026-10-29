/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060228
// Address: 0x0000000100060228

//----- (0000000100060228) ----------------------------------------------------
void __noreturn sub_100060228(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10006023C((__int64)va);
  _Unwind_Resume(a1);
}
