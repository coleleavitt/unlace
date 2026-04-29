bool __fastcall dyld4::SyscallDelegate::sandboxBlockedMmap(dyld4::SyscallDelegate *this, const char *a2)
{
  __int64 v2; // x0

  v2 = __getpid();
  return (int)sandbox_check(v2, "file-map-executable", 1073741825) > 0;
}
