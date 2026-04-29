bool __fastcall dyld4::SyscallDelegate::sandboxBlockedOpen(dyld4::SyscallDelegate *this, const char *a2)
{
  __int64 v2; // x0

  v2 = __getpid();
  return (int)sandbox_check(v2, "file-read-data", 1073741825) > 0;
}
