/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479DD0
// Address: 0x0000000000479DD0

//----- (0000000000479DD0) ----------------------------------------------------
__int64 sub_479DD0(const char *a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  return sub_485470(a1, (__int64)va);
}
