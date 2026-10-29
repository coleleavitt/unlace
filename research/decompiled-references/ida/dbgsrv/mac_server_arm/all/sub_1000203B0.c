/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000203B0
// Address: 0x00000001000203B0

//----- (00000001000203B0) ----------------------------------------------------
void __noreturn sub_1000203B0(_Unwind_Exception *a1, __int64 a2, ...)
{
  _QWORD *v2; // x22
  __int64 v4; // [xsp+8h] [xbp+8h] BYREF
  va_list va; // [xsp+8h] [xbp+8h]
  __int64 v6; // [xsp+10h] [xbp+10h]
  __int64 v7; // [xsp+18h] [xbp+18h]
  va_list va1; // [xsp+20h] [xbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v4 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  sub_10000A550(v2);
  sub_100006228((__int64 *)va);
  sub_100006228((__int64 *)va1);
  _Unwind_Resume(a1);
}
// 1000203B8: variable 'v2' is possibly undefined
