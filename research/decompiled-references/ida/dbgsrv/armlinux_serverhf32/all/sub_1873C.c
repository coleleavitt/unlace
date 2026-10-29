/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1873C
// Address: 0x0001873C

//----- (0001873C) --------------------------------------------------------
int sub_1873C(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  sub_186C0(a1, a2, (int)varg_r2);
  return a1;
}
