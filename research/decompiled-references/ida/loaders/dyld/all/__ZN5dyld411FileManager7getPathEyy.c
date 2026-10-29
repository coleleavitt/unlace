dyld4::SyscallDelegate **__usercall dyld4::FileManager::getPath@<X0>(
        dyld4::SyscallDelegate **this@<X0>,
        fsid_t a2@<X1>,
        uint64_t a3@<X2>,
        _QWORD *a4@<X8>)
{
  dyld4::SyscallDelegate **v5; // x20
  lsl::AllocationMetadata *v6; // x0
  char __s[1024]; // [xsp+8h] [xbp-428h] BYREF

  if ( *(_QWORD *)&a2
    && a3
    && (v5 = this,
        this = (dyld4::SyscallDelegate **)dyld4::SyscallDelegate::fsgetpath(*this, __s, 0x400u, a2, a3),
        this != (dyld4::SyscallDelegate **)-1LL) )
  {
    v6 = (lsl::AllocationMetadata *)lsl::Allocator::strdup(v5[1], __s);
    return (dyld4::SyscallDelegate **)lsl::UniquePtr<char>::UniquePtr<char>((int)a4, v6);
  }
  else
  {
    *a4 = 0;
  }
  return this;
}
