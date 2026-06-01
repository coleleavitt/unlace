/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17320
// Address: 0x00017320

//----- (00017320) --------------------------------------------------------
int sub_17320(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_5358C(1, *(_BYTE **)(a1 + 248), a2, (int)varg_r2);
}
