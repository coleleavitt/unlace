unsigned __int64 sub_1C76F0(int a1, ...)
{
  int v2; // r8d
  int v3; // r9d
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int64 v6; // [rsp+28h] [rbp-B0h]
  __int64 v7; // [rsp+30h] [rbp-A8h]
  __int64 v8; // [rsp+38h] [rbp-A0h]
  __int64 v9; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+48h] [rbp-90h]

  va_start(va, a1);
  v6 = va_arg(va, _QWORD);
  v7 = va_arg(va, _QWORD);
  v8 = va_arg(va, _QWORD);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  va_end(va);
  v5 = __readfsqword(0x28u);
  if ( !batch && !sub_1A15A0() )
  {
    va_start(va, a1);
    sub_543020((_DWORD)QT::QCoreApplication::self + 16, a1, (unsigned int)va, 1, v2, v3);
  }
  return v5 - __readfsqword(0x28u);
}
