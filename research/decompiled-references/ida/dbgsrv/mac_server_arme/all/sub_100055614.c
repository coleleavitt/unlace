/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055614
// Address: 0x0000000100055614

//----- (0000000100055614) ----------------------------------------------------
void __noreturn sub_100055614(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100015298((void ***)va);
  _Unwind_Resume(a1);
}
