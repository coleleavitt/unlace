bool __fastcall dyld4::SyscallDelegate::isContainerized(dyld4::SyscallDelegate *this, const char *__s1)
{
  return __s1 && _platform_strncmp(__s1, "/private/var/mobile/Containers/Data/", 0x24u) == 0;
}
