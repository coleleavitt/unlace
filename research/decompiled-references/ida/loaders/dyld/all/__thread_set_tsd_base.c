signed __int64 __fastcall _thread_set_tsd_base(void *a1)
{
  return mac_syscall(MACHDEP_SYSCALL_TRAP, 2, a1);
}
