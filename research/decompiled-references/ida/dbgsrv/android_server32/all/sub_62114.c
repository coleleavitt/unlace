/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62114
// Address: 0x00062114

//----- (00062114) --------------------------------------------------------
int sub_62114(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return qvprintf(a1, varg_r1);
}
