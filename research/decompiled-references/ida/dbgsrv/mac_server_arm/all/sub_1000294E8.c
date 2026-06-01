/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000294E8
// Address: 0x00000001000294E8

//----- (00000001000294E8) ----------------------------------------------------
void __noreturn sub_1000294E8(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  free_idcv((unsigned __int8 *)va);
  _Unwind_Resume(a1);
}
