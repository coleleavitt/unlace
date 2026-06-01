__int64 sub_37A5A0(int a1, __int64 a2, int a3, QT::QCoreApplication *a4, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  return sub_37A270(a1, a2, a3, a4, (int *)va);
}
