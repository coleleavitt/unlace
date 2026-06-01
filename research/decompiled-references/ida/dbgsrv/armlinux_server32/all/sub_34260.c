/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34260
// Address: 0x00034260

//----- (00034260) --------------------------------------------------------
int sub_34260(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  sub_341DC(a1, a2, (int)varg_r2);
  return a1;
}
