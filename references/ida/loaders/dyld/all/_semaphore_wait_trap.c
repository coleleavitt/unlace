kern_return_t __fastcall semaphore_wait_trap(mach_port_name_t a1)
{
  return mac_syscall(SEMAPHORE_WAIT_TRAP, a1);
}
