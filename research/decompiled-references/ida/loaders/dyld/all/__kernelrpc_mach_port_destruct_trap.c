kern_return_t __cdecl _kernelrpc_mach_port_destruct_trap(
        mach_port_name_t target,
        mach_port_name_t name,
        mach_port_delta_t srdelta,
        uint64_t guard)
{
  return mac_syscall(KERNELRPC_MACH_PORT_DESTRUCT_TRAP, target, name, srdelta, guard);
}
