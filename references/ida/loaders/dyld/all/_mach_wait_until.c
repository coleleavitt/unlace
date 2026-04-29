kern_return_t __cdecl mach_wait_until(uint64_t deadline)
{
  return mac_syscall(MACH_WAIT_UNTIL_TRAP, deadline);
}
