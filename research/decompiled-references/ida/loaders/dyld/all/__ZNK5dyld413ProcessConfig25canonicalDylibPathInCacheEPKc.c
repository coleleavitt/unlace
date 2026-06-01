__int64 __fastcall dyld4::ProcessConfig::canonicalDylibPathInCache(dyld4::ProcessConfig *this, const char *a2)
{
  return dyld4::ProcessConfig::DyldCache::getCanonicalPath((dyld4::ProcessConfig *)((char *)this + 200), a2);
}
