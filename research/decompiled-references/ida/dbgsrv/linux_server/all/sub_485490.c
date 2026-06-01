/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485490
// Address: 0x0000000000485490

//----- (0000000000485490) ----------------------------------------------------
size_t sub_485490(char *a1, __int64 a2, const char *a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return sub_4850F0(a1, a2, a3, (__int64)va);
}
