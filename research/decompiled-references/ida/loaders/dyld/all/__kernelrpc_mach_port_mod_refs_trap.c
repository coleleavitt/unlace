kern_return_t __cdecl _kernelrpc_mach_port_mod_refs_trap(
        mach_port_name_t target,
        mach_port_name_t name,
        mach_port_right_t right,
        mach_port_delta_t delta)
{
  return mac_syscall(KERNELRPC_MACH_PORT_MOD_REFS_TRAP, target, name, right, delta);
}
