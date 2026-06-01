mach_port_name_t mach_reply_port()
{
  return mac_syscall(MACH_REPLY_PORT_TRAP);
}
