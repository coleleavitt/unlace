/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EAE4
// Address: 0x0007EAE4

//----- (0007EAE4) --------------------------------------------------------
int sub_7EAE4(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_7E8CC(a1, a2, (int)varg_r2);
}
