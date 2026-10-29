/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C9E4
// Address: 0x0001C9E4

//----- (0001C9E4) --------------------------------------------------------
void __noreturn sub_1C9E4(char *a1, ...)
{
  va_list varg_r1; // [sp+Ch] [bp+0h] BYREF

  va_start(varg_r1, a1);
  verror(a1, varg_r1);
}
