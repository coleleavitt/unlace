__int64 __fastcall dyld4::Loader::contains(
        dyld4::Loader *this,
        dyld4::RuntimeState *a2,
        const void *a3,
        const void **a4,
        unsigned __int64 *a5,
        unsigned __int8 *a6)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::contains();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::contains(this, a2, a3, a4, a5, a6);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::contains(this, a2, a3, a4, a5, a6);
  }
}
