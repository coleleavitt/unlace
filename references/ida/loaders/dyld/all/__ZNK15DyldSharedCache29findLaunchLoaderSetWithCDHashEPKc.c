char *__fastcall DyldSharedCache::findLaunchLoaderSetWithCDHash(DyldSharedCache *this, const char *__s)
{
  char __dst[140]; // [xsp+Ch] [xbp-A4h] BYREF

  if ( !__s || _platform_strlen(__s) > 0x7F )
    return nullptr;
  strlcpy(__dst, "/cdhash/", 0x8Cu);
  strlcat(__dst, __s, 0x8Cu);
  return DyldSharedCache::findLaunchLoaderSet(this, __dst);
}
