/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E90
// Address: 0x0000000000037E90

//----- (0000000000037E90) ----------------------------------------------------
int sub_37E90(FILE *a1, char *a2, ...)
{
  gcc_va_list arg; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+D0h] [rbp-8h]

  va_start(arg, a2);
  v4 = __readfsqword(0x28u);
  return qvfscanf(a1, a2, arg);
}
