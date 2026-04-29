DyldSharedCache *__fastcall dyld4::ProcessConfig::DyldCache::getCanonicalPath(DyldSharedCache **this, const char *a2)
{
  DyldSharedCache *result; // x0
  unsigned int v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = 0;
  result = *this;
  if ( result )
  {
    if ( (unsigned int)DyldSharedCache::hasImagePath(result, a2, &v4) )
      return (DyldSharedCache *)DyldSharedCache::getIndexedImagePath(*this, v4);
    else
      return nullptr;
  }
  return result;
}
