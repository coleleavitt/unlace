/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004996C
// Address: 0x000000010004996C

//----- (000000010004996C) ----------------------------------------------------
void __noreturn sub_10004996C(_Unwind_Exception *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 v7; // [xsp+28h] [xbp+28h] BYREF
  va_list va; // [xsp+28h] [xbp+28h]
  __int64 v9; // [xsp+30h] [xbp+30h]
  __int64 v10; // [xsp+38h] [xbp+38h]
  va_list va1; // [xsp+40h] [xbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  sub_10000A550((__int64 *)va);
  sub_100006228((__int64 *)va1);
  _Unwind_Resume(a1);
}
