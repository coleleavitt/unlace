/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A92C
// Address: 0x0006A92C

//----- (0006A92C) --------------------------------------------------------
void __noreturn sub_6A92C(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  sub_69434(a2, (int)varg_r2);
  sub_78B44(a1);
}
