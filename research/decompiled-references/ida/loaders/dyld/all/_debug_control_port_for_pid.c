// local variable allocation has failed, the output may be wrong!
kern_return_t __cdecl debug_control_port_for_pid(mach_port_name_t target_tport, int pid, mach_port_name_t *t)
{
  void *v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-96, *(void **)&target_tport, *(void **)&pid, t, v3, v4, v5, v6, v7);
}
