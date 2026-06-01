kern_return_t __cdecl pid_for_task(mach_port_name_t t, int *x)
{
  return mac_syscall(PID_FOR_TASK_TRAP, t, x);
}
