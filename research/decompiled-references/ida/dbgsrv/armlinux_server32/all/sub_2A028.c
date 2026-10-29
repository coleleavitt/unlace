/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A028
// Address: 0x0002A028

//----- (0002A028) --------------------------------------------------------
void __noreturn sub_2A028(int a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_6AF28(a1, (int)varg_r1, (int)&_stack_chk_guard, _stack_chk_guard);
}
