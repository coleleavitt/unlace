unsigned __int64 sub_3C6100(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+38h] [rbp-A0h]
  __int64 v7; // [rsp+40h] [rbp-98h]
  __int64 v8; // [rsp+48h] [rbp-90h]

  va_start(va, a3);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  sub_3C5F90(a1, a2, a3, (const __m128i *)va, v7, v8);
  return v5 - __readfsqword(0x28u);
}
