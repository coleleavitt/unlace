/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D170
// Address: 0x000000000045D170

//----- (000000000045D170) ----------------------------------------------------
unsigned __int64 sub_45D170(const char *a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  sub_485450(a1, (__int64)va);
  sub_45C1D0("\n");
  return v3 - __readfsqword(0x28u);
}
