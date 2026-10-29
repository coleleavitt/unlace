/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100041E28
// Address: 0x0000000100041E28

//----- (0000000100041E28) ----------------------------------------------------
void __noreturn sub_100041E28(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100011A7C((char **)va);
  _Unwind_Resume(a1);
}
