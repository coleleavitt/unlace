__int64 __fastcall dyld4::Loader::representsCachedDylibIndex(dyld4::Loader *this, unsigned __int16 a2)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::representsCachedDylibIndex();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::representsCachedDylibIndex(this);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::representsCachedDylibIndex(this, a2);
  }
}
