kern_return_t __fastcall mk_timer_destroy(mach_port_name_t a1)
{
  return mac_syscall(MK_TIMER_DESTROY_TRAP, a1);
}
