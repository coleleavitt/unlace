dyld4::PrebuiltLoader *__fastcall dyld4::RuntimeState::findPrebuiltLoader(dyld4::RuntimeState *this, const char *__s2)
{
  __int64 v4; // x8
  dyld4::PrebuiltLoader *v5; // x21
  dyld4::PrebuiltLoaderSet *v6; // x0
  dyld4::PrebuiltLoader *Loader; // x0
  unsigned int v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = 0;
  if ( !*((_QWORD *)this + 82)
    || !(unsigned int)DyldSharedCache::hasImagePath(*(DyldSharedCache **)(*((_QWORD *)this + 1) + 200LL), __s2, &v9) )
  {
    goto LABEL_5;
  }
  v4 = *((_QWORD *)this + 82);
  if ( *(_DWORD *)(v4 + 12) <= (unsigned int)(unsigned __int16)v9 )
    dyld4::RuntimeState::findPrebuiltLoader();
  v5 = (dyld4::PrebuiltLoader *)(v4 + *(unsigned int *)(v4 + *(unsigned int *)(v4 + 16) + 4LL * (unsigned __int16)v9));
  if ( (dyld4::PrebuiltLoader::isValid(v5, this) & 1) == 0 )
  {
LABEL_5:
    v6 = *((dyld4::PrebuiltLoaderSet **)this + 85);
    if ( !v6 )
      return nullptr;
    Loader = (dyld4::PrebuiltLoader *)dyld4::PrebuiltLoaderSet::findLoader(v6, __s2);
    if ( !Loader )
      return nullptr;
    v5 = Loader;
    if ( (dyld4::PrebuiltLoader::isValid(Loader, this) & 1) == 0 )
      return nullptr;
  }
  return v5;
}
