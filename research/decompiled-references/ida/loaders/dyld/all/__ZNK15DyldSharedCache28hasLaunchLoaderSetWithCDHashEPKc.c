bool __fastcall DyldSharedCache::hasLaunchLoaderSetWithCDHash(DyldSharedCache *this, const char *a2)
{
  return DyldSharedCache::findLaunchLoaderSetWithCDHash(this, a2) != 0;
}
