kern_return_t __fastcall semaphore_timedwait_trap(mach_port_name_t a1, unsigned int a2, clock_res_t a3)
{
  return mac_syscall(SEMAPHORE_TIMEDWAIT_TRAP, a1, a2, a3);
}
