/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15328
// Address: 0x00015328

//----- (00015328) --------------------------------------------------------
int sub_15328(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_7EA94(a1, a2, (int)varg_r2);
}
