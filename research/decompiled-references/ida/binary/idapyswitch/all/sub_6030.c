void __noreturn sub_6030(int status, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v3 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __va_list_tag *))sub_5E90)(a2, va);
  sub_117A0(status);
}

