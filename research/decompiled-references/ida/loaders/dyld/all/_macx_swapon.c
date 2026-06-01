kern_return_t __cdecl macx_swapon(uint64_t filename, int flags, int size, int priority)
{
  return mac_syscall(MACX_SWAPON_TRAP, filename, flags, size, priority);
}
