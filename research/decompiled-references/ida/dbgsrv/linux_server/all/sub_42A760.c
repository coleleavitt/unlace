/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A760
// Address: 0x000000000042A760

//----- (000000000042A760) ----------------------------------------------------
void **sub_42A760(void **a1, const char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_42A6A0(a1, a2, (const __m128i *)va);
  return a1;
}
