/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003FEDC
// Address: 0x000000010003FEDC

//----- (000000010003FEDC) ----------------------------------------------------
void __noreturn sub_10003FEDC(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100010900((char **)va);
  _Unwind_Resume(a1);
}
