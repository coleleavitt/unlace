/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AAA4
// Address: 0x0006AAA4

//----- (0006AAA4) --------------------------------------------------------
void __noreturn sub_6AAA4(int a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  sub_695AC(a2, (int)varg_r2);
  sub_78CAC(a1);
}
