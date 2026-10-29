/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_29E88
// Address: 0x00029E88

//----- (00029E88) --------------------------------------------------------
void __noreturn sub_29E88(int a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_6ADB0(a1, (int)varg_r1, (int)&_stack_chk_guard, _stack_chk_guard);
}
