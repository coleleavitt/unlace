/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000058DC
// Address: 0x00000001000058DC

//----- (00000001000058DC) ----------------------------------------------------
void __noreturn sub_1000058DC(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000547C((__int64 *)va);
  _Unwind_Resume(a1);
}
