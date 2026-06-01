/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58320
// Address: 0x00058320

//----- (00058320) --------------------------------------------------------
int sub_58320(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_65870(a1, a2, (int)varg_r2);
}
