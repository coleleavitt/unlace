__int64 __fastcall dyld4::Loader::withLayout(__int64 a1, int a2, dyld4::RuntimeState *a3)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)a1 != 1815378276 )
    dyld4::Loader::withLayout();
  if ( (*(_WORD *)(a1 + 4) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::withLayout(a1, a2, a3);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::withLayout();
  }
}
