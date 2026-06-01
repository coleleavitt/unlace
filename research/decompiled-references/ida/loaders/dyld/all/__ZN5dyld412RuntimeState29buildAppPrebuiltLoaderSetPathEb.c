__int64 __fastcall dyld4::RuntimeState::buildAppPrebuiltLoaderSetPath(dyld4::RuntimeState *this, int a2)
{
  const char *v4; // x0
  __int64 v5; // x8
  bool v6; // zf
  __int64 result; // x0
  dyld3 *v8; // x21
  int isMaybeContainerized; // w8
  dyld4::SyscallDelegate *v10; // x0
  char *v11; // x1
  __int64 v12; // x8
  const char *v13; // x0
  char *v14; // x20
  size_t v15; // x0
  char **v16; // x2
  unsigned __int64 v17; // x20
  int v18; // w21
  char *v19; // [xsp+0h] [xbp-450h] BYREF
  char __source[32]; // [xsp+8h] [xbp-448h] BYREF
  char __dst[1024]; // [xsp+28h] [xbp-428h] BYREF

  v4 = (const char *)dyld4::ProcessConfig::Process::environ(
                       (dyld4::ProcessConfig::Process *)(*((_QWORD *)this + 1) + 8LL),
                       "DYLD_CLOSURE_DIR");
  v5 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v5 + 168) )
    v6 = v4 == nullptr;
  else
    v6 = 1;
  if ( !v6 )
  {
    strlcpy(__dst, v4, 0x400u);
LABEL_14:
    result = lsl::Allocator::strdup(*((lsl::Allocator **)this + 2), __dst);
    *((_QWORD *)this + 84) = result;
    return result;
  }
  result = dyld4::ProcessConfig::Process::environ((dyld4::ProcessConfig::Process *)(v5 + 8), "HOME");
  if ( !result )
    return result;
  v8 = (dyld3 *)result;
  isMaybeContainerized = dyld4::SyscallDelegate::isMaybeContainerized(
                           *((dyld4::SyscallDelegate **)this + 1),
                           (const char *)result);
  v10 = *((dyld4::SyscallDelegate **)this + 1);
  if ( isMaybeContainerized )
  {
    result = dyld4::SyscallDelegate::realpathdir(v10, v8, __dst);
    if ( (result & 1) == 0 )
      return result;
    strlcat(__dst, "/Library/Caches/com.apple.dyld/", 0x400u);
    if ( (unsigned int)dyld4::SyscallDelegate::isContainerized(*((dyld4::SyscallDelegate **)this + 1), __dst) )
    {
      if ( !a2
        || (dyld4::SyscallDelegate::dirExists(*((dyld4::SyscallDelegate **)this + 1), (dyld3 *)__dst) & 1) != 0
        || (result = dyld4::SyscallDelegate::mkdirs(*((dyld4::SyscallDelegate **)this + 1), __dst), (_DWORD)result) )
      {
        v11 = *(char **)(*((_QWORD *)this + 1) + 128LL);
LABEL_29:
        strlcat(__dst, v11, 0x400u);
        strlcat(__dst, ".dyld4", 0x400u);
        goto LABEL_14;
      }
      return result;
    }
  }
  else
  {
    if ( *((_BYTE *)v10 + 168) )
    {
      result = dyld4::SyscallDelegate::realpathdir(v10, v8, __dst);
      if ( !(_DWORD)result )
        return result;
    }
    strlcat(__dst, "/Library/Caches/com.apple.dyld/", 0x400u);
  }
  v12 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v12 + 168) )
    goto LABEL_14;
  result = dyld4::ProcessConfig::Process::environ((dyld4::ProcessConfig::Process *)(v12 + 8), "DYLD_USE_CLOSURES");
  if ( result )
  {
    strlcat(__dst, *(const char **)(*((_QWORD *)this + 1) + 128LL), 0x400u);
    strlcat(__dst, "/", 0x400u);
    if ( !a2
      || (dyld4::SyscallDelegate::dirExists(*((dyld4::SyscallDelegate **)this + 1), (dyld3 *)__dst) & 1) != 0
      || (result = dyld4::SyscallDelegate::mkdirs(*((dyld4::SyscallDelegate **)this + 1), __dst), (_DWORD)result) )
    {
      v13 = (const char *)dyld4::ProcessConfig::Process::appleParam(
                            (dyld4::ProcessConfig::Process *)(*((_QWORD *)this + 1) + 8LL),
                            "executable_cdhash");
      if ( v13 )
      {
        strlcat(__dst, v13, 0x400u);
        strlcat(__dst, "-", 0x400u);
      }
      v14 = *(char **)(*((_QWORD *)this + 1) + 16LL);
      v15 = _platform_strlen(v14);
      v17 = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)__source, (__int64 *)v14, v15);
      v19 = __source;
      v18 = 8;
      do
      {
        dyld4::Loader::appendHexByte((dyld4::Loader *)(unsigned __int8)v17, (unsigned __int8)&v19, v16);
        v17 >>= 8;
        --v18;
      }
      while ( v18 );
      *v19 = 0;
      v11 = __source;
      goto LABEL_29;
    }
  }
  return result;
}
