// attributes: thunk
pid_t dyld4::SyscallDelegate::getpid(void)
{
  return __getpid();
}
