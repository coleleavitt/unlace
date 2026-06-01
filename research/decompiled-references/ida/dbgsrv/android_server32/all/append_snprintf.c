/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: append_snprintf
// Address: 0x00084370

//----- (00084370) --------------------------------------------------------
unsigned int append_snprintf(const char *a1, int a2, const char *a3, ...)
{
  char *v5; // r2
  unsigned int result; // r0
  va_list va; // [sp+20h] [bp+14h] BYREF

  va_start(va, a3);
  v5 = (char *)&a1[strlen(a1)];
  result = 0;
  if ( a2 - (int)v5 >= 1 )
    return qvsnprintf(v5, a2 - (_DWORD)v5, a3, (int)va);
  return result;
}
