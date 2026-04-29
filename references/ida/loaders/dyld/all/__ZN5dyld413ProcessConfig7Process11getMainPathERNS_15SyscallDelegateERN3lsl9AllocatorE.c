__int64 __fastcall dyld4::ProcessConfig::Process::getMainPath(
        dyld4::ProcessConfig::Process *this,
        dyld4::SyscallDelegate *a2,
        lsl::Allocator *a3)
{
  fsid_t v6; // x3
  uint64_t v7; // x4
  char __s[1024]; // [xsp+8h] [xbp-428h] BYREF

  v6 = *((fsid_t *)this + 3);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 4);
    if ( v7 )
    {
      if ( dyld4::SyscallDelegate::fsgetpath(a2, __s, 0x400u, v6, v7) != -1 )
        return lsl::Allocator::strdup(a3, __s);
    }
  }
  if ( dyld4::SyscallDelegate::realpath(a2, *((dyld3 **)this + 2), __s) )
    return lsl::Allocator::strdup(a3, __s);
  else
    return *((_QWORD *)this + 2);
}
