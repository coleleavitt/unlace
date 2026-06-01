kern_return_t __cdecl task_dyld_process_info_notify_get(mach_port_name_array_t names_addr, natural_t *names_count_addr)
{
  void *v2; // x2
  void *v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  void *v7; // x7

  return mac_syscall(-13, names_addr, names_count_addr, v2, v3, v4, v5, v6, v7);
}
