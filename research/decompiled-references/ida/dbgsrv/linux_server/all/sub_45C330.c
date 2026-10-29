/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C330
// Address: 0x000000000045C330

//----- (000000000045C330) ----------------------------------------------------
__int64 sub_45C330(__int64 a1, const char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return sub_46D880(a1, a2, (const __m128i *)va);
}
