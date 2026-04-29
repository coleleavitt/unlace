__int64 sub_ED440(__int64 a1, __int64 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __va_list_tag *))sub_240E40)(a1, a2, a3, va);
}
