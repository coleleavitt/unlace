DyldSharedCache *__fastcall dyld4::ProcessConfig::DyldCache::indexOfPath(
        DyldSharedCache **this,
        const char *a2,
        unsigned int *a3)
{
  DyldSharedCache *result; // x0

  result = *this;
  if ( result )
    return (DyldSharedCache *)DyldSharedCache::hasImagePath(result, a2, a3);
  return result;
}
