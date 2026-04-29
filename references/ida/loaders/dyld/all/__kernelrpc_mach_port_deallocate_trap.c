kern_return_t __cdecl _kernelrpc_mach_port_deallocate_trap(mach_port_name_t target, mach_port_name_t name)
{
  return mac_syscall(KERNELRPC_MACH_PORT_DEALLOCATE_TRAP, target, name);
}
