kern_return_t __cdecl task_for_pid(mach_port_name_t target_tport, int pid, mach_port_name_t *t)
{
  return mac_syscall(TASK_FOR_PID_TRAP, target_tport, pid, t);
}
