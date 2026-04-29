kern_return_t __cdecl _kernelrpc_mach_port_allocate_trap(
        mach_port_name_t target,
        mach_port_right_t right,
        mach_port_name_t *name)
{
  return mac_syscall(KERNELRPC_MACH_PORT_ALLOCATE_TRAP, target, right, name);
}
