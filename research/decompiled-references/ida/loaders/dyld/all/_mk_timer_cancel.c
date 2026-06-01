kern_return_t __fastcall mk_timer_cancel(mach_port_name_t a1, uint64_t a2)
{
  return mac_syscall(MK_TIMER_CANCEL_TRAP, a1, a2);
}
