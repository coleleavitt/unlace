bool __fastcall DyldSharedCache::isSubCachePath(DyldSharedCache *this, const char *a2)
{
  char *v2; // x0

  v2 = _platform_strchr((char *)this, 46);
  return v2 && _platform_strcmp(v2, ".development");
}
