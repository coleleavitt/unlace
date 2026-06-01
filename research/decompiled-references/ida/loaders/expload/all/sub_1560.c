__int64 sub_1560(__int64 a1, ...)
{
  __int64 v1; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v4 = __readfsqword(0x28u);
  v1 = getinf(19);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __va_list_tag *))vadd_extra_line)(v1, 2, a1, va);
}

