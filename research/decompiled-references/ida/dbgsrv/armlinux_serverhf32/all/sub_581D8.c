/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_581D8
// Address: 0x000581D8

//----- (000581D8) --------------------------------------------------------
int sub_581D8(_BYTE *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_6758C(0, a1, a2, (int)varg_r2);
}
