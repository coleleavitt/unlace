dyld4::PrebuiltLoader *__fastcall dyld4::Loader::makeDiskLoader(
        __int64 a1,
        dyld4::RuntimeState *this,
        char *__s2,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  dyld4::PrebuiltLoader *result; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( *(_BYTE *)(a4 + 5) )
    return nullptr;
  result = dyld4::RuntimeState::findPrebuiltLoader(this, __s2);
  if ( !result )
  {
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (dyld4::PrebuiltLoader *)dyld4::JustInTimeLoader::makeJustInTimeLoaderDisk(a1, this, __s2, a4, a5, a6, a7);
  }
  return result;
}
