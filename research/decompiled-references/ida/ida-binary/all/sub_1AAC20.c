__int64 sub_1AAC20(unsigned int a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __va_list_tag *))sub_1A27F0)(1, a1, va);
}
