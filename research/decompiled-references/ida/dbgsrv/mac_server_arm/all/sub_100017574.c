/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017574
// Address: 0x0000000100017574

//----- (0000000100017574) ----------------------------------------------------
void __noreturn sub_100017574(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [xsp+20h] [xbp+20h] BYREF

  va_start(va, a5);
  sub_10000AF04((char **)va);
  _Unwind_Resume(a1);
}
