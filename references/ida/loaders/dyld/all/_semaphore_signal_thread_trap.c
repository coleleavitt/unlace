kern_return_t __fastcall semaphore_signal_thread_trap(mach_port_name_t a1, mach_port_name_t a2)
{
  return mac_syscall(SEMAPHORE_SIGNAL_THREAD_TRAP, a1, a2);
}
