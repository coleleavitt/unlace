unsigned __int64 sub_17CE30(__int64 a1, ...)
{
  int v1; // eax
  int v2; // r9d
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+28h] [rbp-B0h]
  __int64 v7; // [rsp+30h] [rbp-A8h]

  va_start(va, a1);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  v1 = itext(a1, v6, v7);
  callui(24, 2, v1, (unsigned int)va, (unsigned int)&callui, v2);
  return v5 - __readfsqword(0x28u);
}
