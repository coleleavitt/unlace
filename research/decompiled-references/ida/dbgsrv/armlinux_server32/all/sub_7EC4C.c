/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EC4C
// Address: 0x0007EC4C

//----- (0007EC4C) --------------------------------------------------------
int sub_7EC4C(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_7EA34(a1, a2, (int)varg_r2);
}
