/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000618BC
// Address: 0x00000001000618BC

//----- (00000001000618BC) ----------------------------------------------------
void __noreturn sub_1000618BC(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [xsp+10h] [xbp+10h] BYREF

  va_start(va, a3);
  sub_100006228((__int64 *)va);
  _Unwind_Resume(a1);
}
