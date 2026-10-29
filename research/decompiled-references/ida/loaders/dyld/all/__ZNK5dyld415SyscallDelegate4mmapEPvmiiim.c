void *__fastcall dyld4::SyscallDelegate::mmap(
        dyld4::SyscallDelegate *this,
        void *a2,
        size_t a3,
        int a4,
        int a5,
        int a6,
        off_t a7)
{
  return mmap(a2, a3, a4, a5, a6, a7);
}
