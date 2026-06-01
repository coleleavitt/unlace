/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C1D0
// Address: 0x000000000045C1D0

//----- (000000000045C1D0) ----------------------------------------------------
__int64 sub_45C1D0(const char *a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  return sub_485450(a1, (__int64)va);
}
