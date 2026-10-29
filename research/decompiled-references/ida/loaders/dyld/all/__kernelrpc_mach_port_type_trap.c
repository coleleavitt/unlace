// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl _kernelrpc_mach_port_type_trap(ipc_space_t task, mach_port_name_t name, mach_port_type_t *ptype)
{
  void *v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-76, *(void **)&task, *(void **)&name, ptype, v3, v4, v5, v6, v7);
}
