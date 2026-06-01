/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17188
// Address: 0x00017188

//----- (00017188) --------------------------------------------------------
void __noreturn sub_17188(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_78CEC(a1, (int)varg_r1, (int)&_stack_chk_guard, _stack_chk_guard);
}
