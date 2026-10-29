/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakepath
// Address: 0x00000000000C0BC0

//----- (00000000000C0BC0) ----------------------------------------------------
char *qmakepath(char *a1, __int64 a2, const char *a3, ...)
{
  gcc_va_list va; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+D0h] [rbp-8h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return vqmakepath(a1, a2, a3, (int *)va);
}
