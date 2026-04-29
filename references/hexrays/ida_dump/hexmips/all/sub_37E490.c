unsigned __int64 sub_37E490(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int128 v5; // [rsp+50h] [rbp-88h]

  va_start(va, a2);
  *(double *)&v5 = va_arg(va, double);
  va_end(va);
  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_37E200(a1, 1, a2, (const __m128i *)va, *(double *)&v5);
  return v4 - __readfsqword(0x28u);
}
