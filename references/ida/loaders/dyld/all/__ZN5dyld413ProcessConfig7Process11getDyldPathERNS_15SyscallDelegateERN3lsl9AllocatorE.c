const char *__fastcall dyld4::ProcessConfig::Process::getDyldPath(
        fsid_t *this,
        dyld4::SyscallDelegate *a2,
        lsl::Allocator *a3)
{
  fsid_t v3; // x3
  uint64_t v4; // x4
  char __s[1024]; // [xsp+8h] [xbp-418h] BYREF

  v3 = *(this + 9);
  if ( *(_QWORD *)&v3
    && (v4 = *((_QWORD *)this + 10)) != 0
    && dyld4::SyscallDelegate::fsgetpath(a2, __s, 0x400u, v3, v4) != -1 )
  {
    return (const char *)lsl::Allocator::strdup(a3, __s);
  }
  else
  {
    return "/usr/lib/dyld";
  }
}
