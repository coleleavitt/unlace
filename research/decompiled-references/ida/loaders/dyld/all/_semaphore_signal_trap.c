kern_return_t __fastcall semaphore_signal_trap(mach_port_name_t a1)
{
  return mac_syscall(SEMAPHORE_SIGNAL_TRAP, a1);
}
