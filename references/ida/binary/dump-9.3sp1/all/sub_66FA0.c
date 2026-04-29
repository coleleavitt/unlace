unsigned __int64 sub_66FA0(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, _QWORD, __int64, __va_list_tag *))sub_1B79D0)(a1, a2, a3, va);
  return v5 - __readfsqword(0x28u);
}
