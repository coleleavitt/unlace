/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000187F8
// Address: 0x00000001000187F8

//----- (00000001000187F8) ----------------------------------------------------
void __noreturn sub_1000187F8(_Unwind_Exception *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [xsp+10h] [xbp+10h] BYREF
  va_list va; // [xsp+10h] [xbp+10h]
  __int64 v6; // [xsp+18h] [xbp+18h]
  __int64 v7; // [xsp+20h] [xbp+20h]
  __int64 v8; // [xsp+28h] [xbp+28h] BYREF
  va_list va1; // [xsp+28h] [xbp+28h]
  __int64 v10; // [xsp+30h] [xbp+30h]
  __int64 v11; // [xsp+38h] [xbp+38h]
  va_list va2; // [xsp+40h] [xbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  v10 = va_arg(va2, _QWORD);
  v11 = va_arg(va2, _QWORD);
  sub_10000ADD0((__int64 *)va);
  sub_100006678((__int64 *)va1);
  sub_100006678((__int64 *)va2);
  _Unwind_Resume(a1);
}
