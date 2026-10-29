/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16FE4
// Address: 0x00016FE4

//----- (00016FE4) --------------------------------------------------------
void __noreturn sub_16FE4(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_78B84(a1, (int)varg_r1, (int)&_stack_chk_guard, _stack_chk_guard);
}
