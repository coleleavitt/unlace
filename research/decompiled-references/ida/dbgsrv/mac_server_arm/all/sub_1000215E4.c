/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000215E4
// Address: 0x00000001000215E4

//----- (00000001000215E4) ----------------------------------------------------
void __noreturn sub_1000215E4(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000A550((__int64 *)va);
  _Unwind_Resume(a1);
}
