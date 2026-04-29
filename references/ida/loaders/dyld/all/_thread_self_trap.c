mach_port_name_t thread_self_trap()
{
  return mac_syscall(THREAD_SELF_TRAP);
}
