/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_172DC
// Address: 0x000172DC

//----- (000172DC) --------------------------------------------------------
int sub_172DC(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_5358C(0, *(_BYTE **)(a1 + 248), a2, (int)varg_r2);
}
