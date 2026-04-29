__int64 sub_3834E0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return sub_383340(0, a2, (__int64)&unk_4130E0, (const __m128i *)va);
}
