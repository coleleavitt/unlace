/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_340C8
// Address: 0x000340C8

//----- (000340C8) --------------------------------------------------------
int sub_340C8(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  sub_34044(a1, a2, (int)varg_r2);
  return a1;
}
