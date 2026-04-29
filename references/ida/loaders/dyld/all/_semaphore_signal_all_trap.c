kern_return_t __fastcall semaphore_signal_all_trap(mach_port_name_t a1)
{
  return mac_syscall(SEMAPHORE_SIGNAL_ALL_TRAP, a1);
}
