/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76A30
// Address: 0x00076A30

//----- (00076A30) --------------------------------------------------------
char *sub_76A30(char *a1, int a2, unsigned __int8 *a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_76908(a1, a2, a3, (int)varg_r3);
}
