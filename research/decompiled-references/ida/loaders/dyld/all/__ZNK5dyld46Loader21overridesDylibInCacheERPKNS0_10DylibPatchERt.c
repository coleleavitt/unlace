__int64 __fastcall dyld4::Loader::overridesDylibInCache(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)a1 != 1815378276 )
    dyld4::Loader::overridesDylibInCache();
  if ( (*(_WORD *)(a1 + 4) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::overridesDylibInCache();
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::overridesDylibInCache(a1, a2, a3);
  }
}
