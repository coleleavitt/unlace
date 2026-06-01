/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EA4C
// Address: 0x0007EA4C

//----- (0007EA4C) --------------------------------------------------------
int sub_7EA4C(_BYTE *a1, int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_7E7C4(a1, a2, a3, (int)varg_r3);
}
