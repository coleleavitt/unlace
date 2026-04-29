kern_return_t __cdecl task_name_for_pid(mach_port_name_t target_tport, int pid, mach_port_name_t *tn)
{
  return mac_syscall(TASK_NAME_FOR_PID_TRAP, target_tport, pid, tn);
}
