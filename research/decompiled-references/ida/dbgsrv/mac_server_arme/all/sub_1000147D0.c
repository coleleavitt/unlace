/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000147D0
// Address: 0x00000001000147D0

//----- (00000001000147D0) ----------------------------------------------------
void __noreturn sub_1000147D0(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_10000ADD0((__int64 *)va);
  _Unwind_Resume(a1);
}
