/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x00000000000CC090

//----- (00000000000CC090) ----------------------------------------------------
int qsscanf(char *a1, char *a2, ...)
{
  gcc_va_list arg; // [rsp+B0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+D0h] [rbp-8h]

  va_start(arg, a2);
  v4 = __readfsqword(0x28u);
  return qvsscanf(a1, a2, arg);
}
