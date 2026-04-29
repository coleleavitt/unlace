kern_return_t __cdecl clock_sleep_trap(
        mach_port_name_t clock_name,
        sleep_type_t sleep_type,
        int sleep_sec,
        int sleep_nsec,
        mach_timespec_t *wakeup_time)
{
  return mac_syscall(CLOCK_SLEEP_TRAP, clock_name, sleep_type, sleep_sec, sleep_nsec, (mach_timespec_t)wakeup_time);
}
