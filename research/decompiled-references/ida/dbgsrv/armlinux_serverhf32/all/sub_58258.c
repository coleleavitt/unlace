/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58258
// Address: 0x00058258

//----- (00058258) --------------------------------------------------------
int sub_58258(_BYTE *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_6758C(1, a1, a2, (int)varg_r2);
}
