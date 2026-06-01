void __noreturn sub_32760(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v3 = __readfsqword(0x28u);
  sub_326F0(a1, a2, (const __m128i *)va);
}

