bool __fastcall dyld4::SyscallDelegate::sandboxBlockedPageInLinking(dyld4::SyscallDelegate *this)
{
  __int64 v1; // x0

  v1 = __getpid();
  return (int)sandbox_check(v1, "syscall-unix", 1073741838) > 0;
}
