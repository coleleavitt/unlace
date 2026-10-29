/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015D8C
// Address: 0x0000000100015D8C

//----- (0000000100015D8C) ----------------------------------------------------
void __noreturn sub_100015D8C(_Unwind_Exception *a1, __int64 a2, ...)
{
  va_list va; // [xsp+8h] [xbp+8h] BYREF

  va_start(va, a2);
  sub_100019A48((__int64)va);
  _Unwind_Resume(a1);
}
