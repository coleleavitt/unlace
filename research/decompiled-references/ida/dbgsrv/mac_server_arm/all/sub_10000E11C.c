/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E11C
// Address: 0x000000010000E11C

//----- (000000010000E11C) ----------------------------------------------------
void __noreturn sub_10000E11C(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v6; // [xsp+20h] [xbp+20h] BYREF
  va_list va; // [xsp+20h] [xbp+20h]
  __int64 v8; // [xsp+28h] [xbp+28h]
  __int64 v9; // [xsp+30h] [xbp+30h]
  __int64 v10; // [xsp+38h] [xbp+38h] BYREF
  va_list va1; // [xsp+38h] [xbp+38h]
  __int64 v12; // [xsp+40h] [xbp+40h]
  __int64 v13; // [xsp+48h] [xbp+48h]
  va_list va2; // [xsp+50h] [xbp+50h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v6 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  sub_100006228((__int64 *)va);
  sub_100006228((__int64 *)va1);
  sub_100006228((__int64 *)va2);
  _Unwind_Resume(a1);
}
