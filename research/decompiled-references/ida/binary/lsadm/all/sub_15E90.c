__int64 sub_15E90(__int64 (__fastcall ***a1)(_QWORD), ...)
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
  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  return off_7A600(0x17u, a1, (const __m128i *)va, (const __m128i *)&off_7A600, v7, v8);
}

