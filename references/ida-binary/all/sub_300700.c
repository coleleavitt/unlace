__int64 sub_300700(int a1, __int64 a2, ...)
{
  int v2; // eax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+30h] [rbp-A8h]

  va_start(va, a2);
  v6 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = itext((unsigned int)a2, a2, v6);
  return callui(28, 0, 0, 0, a1, v2, va);
}
