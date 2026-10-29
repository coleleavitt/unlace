const char *__fastcall dyld4::ProcessConfig::Process::getMainUnrealPath(
        dyld4::ProcessConfig::Process *this,
        dyld4::SyscallDelegate *a2,
        lsl::Allocator *a3)
{
  const char *v6; // x20
  int v7; // w8
  char __dst[1024]; // [xsp+8h] [xbp-438h] BYREF

  v6 = (const char *)_simple_getenv(*((_QWORD *)this + 14), "executable_path");
  if ( !v6 )
    v6 = **((const char ***)this + 12);
  v7 = *(unsigned __int8 *)v6;
  if ( v7 != 47 )
  {
    if ( v7 == 46 )
      v6 += 2 * (v6[1] == 47);
    if ( (unsigned int)dyld4::SyscallDelegate::getCWD(a2, __dst) )
    {
      strlcat(__dst, "/", 0x400u);
      strlcat(__dst, v6, 0x400u);
      return (const char *)lsl::Allocator::strdup(a3, __dst);
    }
  }
  return v6;
}
