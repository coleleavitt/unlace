/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5835C
// Address: 0x0005835C

//----- (0005835C) --------------------------------------------------------
int sub_5835C(_BYTE *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_67708(0, a1, a2, (int)varg_r2);
}
