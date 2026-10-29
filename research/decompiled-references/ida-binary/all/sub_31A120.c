__int64 sub_31A120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-C0h]

  va_start(va, a5);
  v7 = __readfsqword(0x28u);
  return sub_1A1660(a1, a2, a3, a4, a5, (__int64)va);
}
