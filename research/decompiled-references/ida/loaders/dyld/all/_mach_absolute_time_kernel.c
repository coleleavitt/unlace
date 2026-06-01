uint64_t mach_absolute_time_kernel()
{
  return mac_syscall(MACH_ABSOLUTE_TIME_TRAP);
}
