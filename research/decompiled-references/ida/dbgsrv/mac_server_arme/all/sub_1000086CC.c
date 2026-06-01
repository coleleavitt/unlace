/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000086CC
// Address: 0x00000001000086CC

//----- (00000001000086CC) ----------------------------------------------------
void __noreturn sub_1000086CC(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000AD70((__int64 *)va);
  _Unwind_Resume(a1);
}
