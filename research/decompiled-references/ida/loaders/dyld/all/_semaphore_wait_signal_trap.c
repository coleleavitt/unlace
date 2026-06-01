kern_return_t __fastcall semaphore_wait_signal_trap(mach_port_name_t a1, mach_port_name_t a2)
{
  return mac_syscall(SEMAPHORE_WAIT_SIGNAL_TRAP, a1, a2);
}
