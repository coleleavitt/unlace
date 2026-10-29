__int64 sub_1698A0(int a1, int a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return callui(28, 0, 0, 0, a1, a2, va);
}
