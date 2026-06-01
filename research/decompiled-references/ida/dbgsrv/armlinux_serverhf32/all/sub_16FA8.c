/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16FA8
// Address: 0x00016FA8

//----- (00016FA8) --------------------------------------------------------
int sub_16FA8(char *a1, int a2, int a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_6BD90(a1, a2, a3, (int)varg_r3);
}
