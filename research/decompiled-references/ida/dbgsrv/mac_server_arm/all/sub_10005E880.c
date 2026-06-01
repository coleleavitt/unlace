/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E880
// Address: 0x000000010005E880

//----- (000000010005E880) ----------------------------------------------------
void __noreturn sub_10005E880(_Unwind_Exception *a1, __int64 a2, ...)
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
  sub_100006228((__int64 *)va);
  sub_1000017A4((__int64 *)va1);
  _Unwind_Resume(a1);
}
