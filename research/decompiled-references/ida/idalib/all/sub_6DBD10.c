unsigned __int64 sub_6DBD10(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  sub_6DBA50(a1, a2, a3, (__int64)va, 0);
  return v5 - __readfsqword(0x28u);
}
