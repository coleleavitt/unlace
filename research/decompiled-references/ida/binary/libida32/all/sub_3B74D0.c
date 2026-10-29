void __noreturn sub_3B74D0(int a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-C0h]
  __int64 v3; // [rsp+28h] [rbp-B0h]
  __int64 v4; // [rsp+30h] [rbp-A8h]
  __int64 v5; // [rsp+38h] [rbp-A0h]
  __int64 v6; // [rsp+40h] [rbp-98h]
  __int64 v7; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v3 = va_arg(va, _QWORD);
  v4 = va_arg(va, _QWORD);
  v5 = va_arg(va, _QWORD);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v2 = __readfsqword(0x28u);
  callui(24, 4, a1, (int)va, (int)&callui, v7);
}

