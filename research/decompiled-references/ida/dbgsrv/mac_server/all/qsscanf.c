/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x0000000100081A00

//----- (0000000100081A00) ----------------------------------------------------
int qsscanf(char *a1, char *a2, ...)
{
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a2);
  return qvsscanf(a1, a2, va);
}
