/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4172B0
// Address: 0x00000000004172B0

//----- (00000000004172B0) ----------------------------------------------------
__int64 sub_4172B0(__int64 a1, const char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_4171E0(a1, a2, (const __m128i *)va);
  return a1;
}
