void __fastcall dyld4::Loader::applyFixups(
        dyld4::Loader *this,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        dyld4::DyldCacheDataConstLazyScopedWriter *a4)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::applyFixups();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dyld4::PrebuiltLoader::applyFixups(this, a2, a3, a4);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dyld4::JustInTimeLoader::applyFixups(this, a2, a3, a4);
  }
}
