// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl _kernelrpc_mach_port_get_attributes_trap(
        mach_port_name_t target,
        mach_port_name_t name,
        mach_port_flavor_t flavor,
        mach_port_info_t port_info_out,
        mach_msg_type_number_t *port_info_outCnt)
{
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(
           -40,
           *(void **)&target,
           *(void **)&name,
           *(void **)&flavor,
           port_info_out,
           port_info_outCnt,
           v5,
           v6,
           v7);
}
