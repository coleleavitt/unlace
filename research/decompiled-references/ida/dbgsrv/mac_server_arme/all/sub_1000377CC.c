/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000377CC
// Address: 0x00000001000377CC

//----- (00000001000377CC) ----------------------------------------------------
void __noreturn sub_1000377CC(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x29
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10003EB70((char **)va);
  sub_1000349EC((unsigned __int8 *)(v2 - 120));
  _Unwind_Resume(a1);
}
// 100037810: variable 'v2' is possibly undefined
