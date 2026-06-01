// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl _kernelrpc_mach_vm_purgable_control_trap(
        mach_port_name_t target,
        mach_vm_offset_t address,
        vm_purgable_t control,
        int *state)
{
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-11, *(void **)&target, (void *)address, *(void **)&control, state, v4, v5, v6, v7);
}
