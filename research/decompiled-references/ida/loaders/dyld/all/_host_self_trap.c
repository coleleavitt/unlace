mach_port_name_t host_self_trap()
{
  return mac_syscall(HOST_SELF_TRAP);
}
