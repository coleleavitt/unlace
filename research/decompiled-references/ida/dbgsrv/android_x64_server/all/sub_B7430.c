/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B7430
// Address: 0x00000000000B7430

//----- (00000000000B7430) ----------------------------------------------------
int sub_B7430(char *a1, ...)
{
  gcc_va_list arg; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+D0h] [rbp-8h]

  va_start(arg, a1);
  v3 = __readfsqword(0x28u);
  return qveprintf(a1, arg);
}
