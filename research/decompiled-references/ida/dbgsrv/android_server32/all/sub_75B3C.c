/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75B3C
// Address: 0x00075B3C

//----- (00075B3C) --------------------------------------------------------
int sub_75B3C(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return qveprintf(a1, varg_r1);
}
