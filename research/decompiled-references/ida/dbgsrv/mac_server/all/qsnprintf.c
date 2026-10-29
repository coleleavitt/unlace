/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsnprintf
// Address: 0x0000000100081960

//----- (0000000100081960) ----------------------------------------------------
int qsnprintf(char *a1, signed __int64 a2, char *a3, ...)
{
  va_list va; // [rsp+B0h] [rbp-20h] BYREF

  va_start(va, a3);
  return qvsnprintf(a1, a2, a3, va);
}
