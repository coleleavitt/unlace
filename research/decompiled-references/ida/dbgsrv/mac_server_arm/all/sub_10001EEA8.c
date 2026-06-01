/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EEA8
// Address: 0x000000010001EEA8

//----- (000000010001EEA8) ----------------------------------------------------
void __noreturn sub_10001EEA8(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x23
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10000A550((_QWORD *)(v2 + 8));
  free_idcv((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
// 10001EEAC: variable 'v2' is possibly undefined
