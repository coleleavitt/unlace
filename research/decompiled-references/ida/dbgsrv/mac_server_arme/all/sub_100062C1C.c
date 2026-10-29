/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062C1C
// Address: 0x0000000100062C1C

//----- (0000000100062C1C) ----------------------------------------------------
void __noreturn sub_100062C1C(_Unwind_Exception *a1, __int64 a2, ...)
{
  __int64 v3; // [xsp+8h] [xbp+8h] BYREF
  va_list va; // [xsp+8h] [xbp+8h]
  __int64 v5; // [xsp+10h] [xbp+10h]
  __int64 v6; // [xsp+18h] [xbp+18h]
  va_list va1; // [xsp+20h] [xbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v3 = va_arg(va1, _QWORD);
  v5 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  sub_100006678((__int64 *)va);
  sub_1000018E0((__int64 *)va1);
  _Unwind_Resume(a1);
}
