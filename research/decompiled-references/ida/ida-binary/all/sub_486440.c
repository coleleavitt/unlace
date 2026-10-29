__int64 sub_486440(__int64 *a1, __int64 a2, const char *a3, unsigned int a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // r9
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-D0h]

  va_start(va, a4);
  v9 = __readfsqword(0x28u);
  v5 = itext(a4, a2, a3);
  return sub_4854B0(a1, a2, a3, v5, (const __m128i *)va, v6);
}
