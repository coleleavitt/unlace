/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_583DC
// Address: 0x000583DC

//----- (000583DC) --------------------------------------------------------
int sub_583DC(_BYTE *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  return sub_67708(1, a1, a2, (int)varg_r2);
}
