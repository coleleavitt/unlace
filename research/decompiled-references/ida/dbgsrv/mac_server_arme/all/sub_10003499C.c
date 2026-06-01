/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003499C
// Address: 0x000000010003499C

//----- (000000010003499C) ----------------------------------------------------
void __noreturn sub_10003499C(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000ADD0((__int64 *)va);
  _Unwind_Resume(a1);
}
