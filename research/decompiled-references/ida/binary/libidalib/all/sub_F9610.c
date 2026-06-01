__int64 sub_F9610(unsigned int a1, __int64 a2, ...)
{
  __int64 v2; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = itext();
  return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64, __va_list_tag *))callui)(
           28,
           0,
           0,
           0,
           a1,
           v2,
           va);
}

