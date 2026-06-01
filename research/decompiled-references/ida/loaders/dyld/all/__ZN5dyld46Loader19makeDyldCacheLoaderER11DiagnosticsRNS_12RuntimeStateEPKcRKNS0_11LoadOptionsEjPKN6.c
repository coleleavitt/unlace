dyld4::PrebuiltLoader *__fastcall dyld4::Loader::makeDyldCacheLoader(
        int a1,
        dyld4::RuntimeState *this,
        char *__s2,
        __int64 a4,
        unsigned int a5)
{
  dyld4::PrebuiltLoader *v5; // x25
  int v8; // w21
  dyld4::PrebuiltLoader *PrebuiltLoader; // x0
  __int64 v13; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( *(_BYTE *)(a4 + 5) )
    return nullptr;
  v8 = a4;
  PrebuiltLoader = dyld4::RuntimeState::findPrebuiltLoader(this, __s2);
  if ( PrebuiltLoader )
  {
    v5 = PrebuiltLoader;
    v13 = dyld4::Loader::mf(PrebuiltLoader, this);
    if ( (dyld3::MachOFile::loadableIntoProcess(v13, *(unsigned int *)(*((_QWORD *)this + 1) + 68LL), __s2) & 1) != 0 )
      return v5;
  }
  if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (dyld4::PrebuiltLoader *)dyld4::JustInTimeLoader::makeJustInTimeLoaderDyldCache(
                                    a1,
                                    (int)this,
                                    (int)__s2,
                                    v8,
                                    a5);
}
