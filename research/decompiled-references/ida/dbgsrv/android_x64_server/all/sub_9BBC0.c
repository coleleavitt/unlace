/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BBC0
// Address: 0x000000000009BBC0

//----- (000000000009BBC0) ----------------------------------------------------
int sub_9BBC0(char *a1, ...)
{
  gcc_va_list arg; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+D0h] [rbp-8h]

  va_start(arg, a1);
  v3 = __readfsqword(0x28u);
  return qvprintf(a1, arg);
}
