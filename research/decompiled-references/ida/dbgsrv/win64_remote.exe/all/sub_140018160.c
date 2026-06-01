/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140018160
// Address: 0x0000000140018160

//----- (0000000140018160) ----------------------------------------------------
void __noreturn sub_140018160(signed __int64 a1, ...)
{
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF
  va_list va; // [rsp+38h] [rbp+10h]
  __int64 v3; // [rsp+40h] [rbp+18h]
  __int64 v4; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v1 = va_arg(va1, _QWORD);
  v3 = va_arg(va1, _QWORD);
  v4 = va_arg(va1, _QWORD);
  sub_140020860(a1, va, v3, v4);
}
