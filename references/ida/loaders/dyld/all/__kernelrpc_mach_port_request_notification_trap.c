// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl _kernelrpc_mach_port_request_notification_trap(
        ipc_space_t task,
        mach_port_name_t name,
        mach_msg_id_t msgid,
        mach_port_mscount_t sync,
        mach_port_name_t notify,
        mach_msg_type_name_t notifyPoly,
        mach_port_name_t *previous)
{
  void *v7; // x7

  return mac_syscall(
           -77,
           *(void **)&task,
           *(void **)&name,
           *(void **)&msgid,
           *(void **)&sync,
           *(void **)&notify,
           *(void **)&notifyPoly,
           previous,
           v7);
}
