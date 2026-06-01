/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8630
// Address: 0x00000000000C8630

//----- (00000000000C8630) ----------------------------------------------------
unsigned __int64 sub_C8630(__int64 a1, const char *a2, ...)
{
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+D0h] [rbp-8h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  sub_CD480(a1, a2, (__int64)va);
  return __readfsqword(0x28u);
}
