/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000368A0
// Address: 0x00000001000368A0

//----- (00000001000368A0) ----------------------------------------------------
void __noreturn sub_1000368A0(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x26
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000ADD0((_QWORD *)(v2 + 8));
  sub_10003E3A4((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
// 1000368A8: variable 'v2' is possibly undefined
