__int64 __fastcall dyld4::Loader::hasBeenFixedUp(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::hasBeenFixedUp();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::hasBeenFixedUp(this, a2);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::hasBeenFixedUp(this, a2);
  }
}
