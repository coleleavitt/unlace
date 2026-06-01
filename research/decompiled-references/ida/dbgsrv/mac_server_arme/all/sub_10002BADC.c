/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BADC
// Address: 0x000000010002BADC

//----- (000000010002BADC) ----------------------------------------------------
void __noreturn sub_10002BADC(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  free_idcv((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
