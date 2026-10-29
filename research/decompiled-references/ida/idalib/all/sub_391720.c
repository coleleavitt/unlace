bool sub_391720(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-D0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  qfputs("  ");
  ((void (__fastcall *)(__int64, __int64, __va_list_tag *))qvfprintf)(a1, a2, va);
  return (unsigned int)qfputs(";\n") == -1;
}
