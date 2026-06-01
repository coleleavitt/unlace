/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1714C
// Address: 0x0001714C

//----- (0001714C) --------------------------------------------------------
int sub_1714C(char *a1, int a2, int a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  return sub_6BF00(a1, a2, a3, (int)varg_r3);
}
