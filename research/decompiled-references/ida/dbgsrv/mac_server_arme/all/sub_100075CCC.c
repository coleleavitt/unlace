/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075CCC
// Address: 0x0000000100075CCC

//----- (0000000100075CCC) ----------------------------------------------------
void __noreturn sub_100075CCC(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100075E28((pthread_mutex_t **)va);
  _Unwind_Resume(a1);
}
