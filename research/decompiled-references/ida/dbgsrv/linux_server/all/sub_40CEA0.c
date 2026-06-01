/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CEA0
// Address: 0x000000000040CEA0

//----- (000000000040CEA0) ----------------------------------------------------
int sub_40CEA0(FILE *a1, char *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return sub_485320(a1, a2, va);
}
