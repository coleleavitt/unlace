/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032E04
// Address: 0x0000000100032E04

//----- (0000000100032E04) ----------------------------------------------------
void __noreturn sub_100032E04(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_10000A550(va);
  _Unwind_Resume(a1);
}
