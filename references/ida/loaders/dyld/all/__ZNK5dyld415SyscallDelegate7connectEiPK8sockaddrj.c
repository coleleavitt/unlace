__int64 __fastcall dyld4::SyscallDelegate::connect(
        dyld4::SyscallDelegate *this,
        int a2,
        const sockaddr *a3,
        socklen_t a4)
{
  return __connect(a2, a3, a4);
}
