kern_return_t __fastcall mach_timebase_info_trap(mach_timebase_info *a1)
{
  return mac_syscall(MACH_TIMEBASE_INFO_TRAP, a1);
}
