ssize_t __fastcall dyld4::SyscallDelegate::fsgetpath(
        dyld4::SyscallDelegate *this,
        char *a2,
        size_t a3,
        fsid_t a4,
        uint64_t a5)
{
  fsid_t v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = a4;
  return fsgetpath(a2, a3, &v6, a5);
}
