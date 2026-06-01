kern_return_t __cdecl macx_backing_store_recovery(int pid)
{
  return mac_syscall(MACX_BACKING_STORE_RECOVERY_TRAP, pid);
}
