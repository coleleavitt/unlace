ssize_t __fastcall dyld4::SyscallDelegate::pread(
        dyld4::SyscallDelegate *this,
        int __fd,
        void *__buf,
        size_t __nbyte,
        off_t a5)
{
  return pread(__fd, __buf, __nbyte, a5);
}
