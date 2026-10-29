unsigned __int64 sub_39ADA0(unsigned int a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]
  __int64 v4; // [rsp+28h] [rbp-B0h]
  __int64 v5; // [rsp+30h] [rbp-A8h]
  __int64 v6; // [rsp+38h] [rbp-A0h]
  __int64 v7; // [rsp+40h] [rbp-98h]
  __int64 v8; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  va_end(va);
  v3 = __readfsqword(0x28u);
  if ( !errorexit )
  {
    va_start(va, a1);
    ((void (__fastcall *)(__int64, _QWORD, __va_list_tag *, __int64, __int64, __int64))invoke_callbacks)(
      3,
      a1,
      va,
      v6,
      v7,
      v8);
  }
  return v3 - __readfsqword(0x28u);
}
