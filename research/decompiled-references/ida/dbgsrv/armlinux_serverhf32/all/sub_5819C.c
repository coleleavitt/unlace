/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5819C
// Address: 0x0005819C

//----- (0005819C) --------------------------------------------------------
int sub_5819C(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_656F0(a1, a2, (int)varg_r2);
}
