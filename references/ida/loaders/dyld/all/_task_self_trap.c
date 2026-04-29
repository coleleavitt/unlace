mach_port_name_t task_self_trap(void)
{
  return mac_syscall(TASK_SELF_TRAP);
}
