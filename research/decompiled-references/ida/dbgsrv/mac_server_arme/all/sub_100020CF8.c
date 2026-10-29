/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020CF8
// Address: 0x0000000100020CF8

//----- (0000000100020CF8) ----------------------------------------------------
void __noreturn sub_100020CF8(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x23
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000ADD0((_QWORD *)(v2 + 8));
  free_idcv((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
// 100020CFC: variable 'v2' is possibly undefined
