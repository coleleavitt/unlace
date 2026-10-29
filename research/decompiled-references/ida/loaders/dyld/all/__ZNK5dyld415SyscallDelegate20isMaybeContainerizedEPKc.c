bool __fastcall dyld4::SyscallDelegate::isMaybeContainerized(dyld4::SyscallDelegate *this, char *__s1)
{
  return __s1 && strstr(__s1, "/var/mobile/Containers/Data/") != nullptr;
}
