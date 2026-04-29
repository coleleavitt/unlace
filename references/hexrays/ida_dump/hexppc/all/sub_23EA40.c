__int64 sub_23EA40(char a1, __int64 a2, __int64 a3, ...)
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
  return sub_23E970(a1, a2, a3, (__int64)va, v7, v8);
}
