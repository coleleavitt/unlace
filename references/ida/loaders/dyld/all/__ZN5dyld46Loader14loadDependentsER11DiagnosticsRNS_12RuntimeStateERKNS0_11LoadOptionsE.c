void __fastcall dyld4::Loader::loadDependents(__int64 a1, Diagnostics *a2, dyld4::RuntimeState *a3, __int128 *a4)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)a1 != 1815378276 )
    dyld4::Loader::loadDependents();
  if ( (*(_WORD *)(a1 + 4) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dyld4::PrebuiltLoader::loadDependents(a1, a2, a3, a4);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dyld4::JustInTimeLoader::loadDependents();
  }
}
