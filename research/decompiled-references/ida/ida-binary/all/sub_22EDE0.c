__int64 sub_22EDE0(int a1, int a2, int a3, int a4, int a5, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-C0h]

  va_start(va, a5);
  v7 = __readfsqword(0x28u);
  return callui(28, a1, a2, a3, a4, a5, va);
}
