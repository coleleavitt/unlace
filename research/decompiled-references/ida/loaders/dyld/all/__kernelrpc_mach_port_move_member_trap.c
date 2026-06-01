kern_return_t __cdecl _kernelrpc_mach_port_move_member_trap(
        mach_port_name_t target,
        mach_port_name_t member,
        mach_port_name_t after)
{
  return mac_syscall(KERNELRPC_MACH_PORT_MOVE_MEMBER_TRAP, target, member, after);
}
