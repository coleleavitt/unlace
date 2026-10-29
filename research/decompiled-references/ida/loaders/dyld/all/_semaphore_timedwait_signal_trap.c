kern_return_t __fastcall semaphore_timedwait_signal_trap(
        mach_port_name_t a1,
        mach_port_name_t a2,
        unsigned int a3,
        clock_res_t a4)
{
  return mac_syscall(SEMAPHORE_TIMEDWAIT_SIGNAL_TRAP, a1, a2, a3, a4);
}
