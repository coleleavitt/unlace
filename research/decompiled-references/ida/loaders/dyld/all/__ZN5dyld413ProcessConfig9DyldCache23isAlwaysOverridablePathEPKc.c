bool __fastcall dyld4::ProcessConfig::DyldCache::isAlwaysOverridablePath(
        dyld4::ProcessConfig::DyldCache *this,
        const char *a2)
{
  return _platform_strcmp((const char *)this, "/usr/lib/system/libdispatch.dylib") == 0;
}
