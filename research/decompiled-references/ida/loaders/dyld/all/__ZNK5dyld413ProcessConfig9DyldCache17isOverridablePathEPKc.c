bool __fastcall dyld4::ProcessConfig::DyldCache::isOverridablePath(
        dyld4::ProcessConfig::DyldCache *this,
        const char *__s1)
{
  return *((_BYTE *)this + 140) || _platform_strcmp(__s1, "/usr/lib/system/libdispatch.dylib") == 0;
}
