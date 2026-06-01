bool __fastcall dyld4::SyscallDelegate::getpath(dyld4::SyscallDelegate *this, int a2, char *a3)
{
  return fcntl(a2, 50, a3) == 0;
}
