/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_188E0
// Address: 0x000188E0

//----- (000188E0) --------------------------------------------------------
int sub_188E0(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  sub_18864(a1, a2, (int)varg_r2);
  return a1;
}
