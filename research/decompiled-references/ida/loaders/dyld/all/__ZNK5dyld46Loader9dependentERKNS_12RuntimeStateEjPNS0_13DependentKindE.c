__int64 __fastcall dyld4::Loader::dependent(
        dyld4::JustInTimeLoader *a1,
        dyld4::RuntimeState *a2,
        unsigned int a3,
        _BYTE *a4)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)a1 != 1815378276 )
    dyld4::Loader::dependent();
  if ( (*((_WORD *)a1 + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::dependent(a1, a2, a3, a4);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::dependent(a1, (int)a2, a3);
  }
}
