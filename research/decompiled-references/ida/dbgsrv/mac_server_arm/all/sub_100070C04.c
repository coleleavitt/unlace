/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070C04
// Address: 0x0000000100070C04

//----- (0000000100070C04) ----------------------------------------------------
void __noreturn sub_100070C04(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100070D54((pthread_mutex_t **)va);
  _Unwind_Resume(a1);
}
