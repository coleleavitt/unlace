/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035F44
// Address: 0x0000000100035F44

//----- (0000000100035F44) ----------------------------------------------------
void __noreturn sub_100035F44(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v2; // x29
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_10003CCF4((char **)va);
  sub_100033200((unsigned __int8 *)(v2 - 120));
  _Unwind_Resume(a1);
}
// 100035F88: variable 'v2' is possibly undefined
