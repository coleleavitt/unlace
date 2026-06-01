mach_port_name_t mk_timer_create()
{
  return mac_syscall(MK_TIMER_CREATE_TRAP);
}
