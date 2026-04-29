kern_return_t __cdecl _kernelrpc_mach_port_unguard_trap(mach_port_name_t target, mach_port_name_t name, uint64_t guard)
{
  return mac_syscall(KERNELRPC_MACH_PORT_UNGUARD_TRAP, target, name, guard);
}
