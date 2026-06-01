__int64 __fastcall dyld4::Loader::getExportsTrie(dyld4::Loader *this, unsigned __int64 *a2, unsigned int *a3)
{
  __int64 _8; // [xsp+8h] [xbp+8h]

  if ( *(_DWORD *)this != 1815378276 )
    dyld4::Loader::getExportsTrie();
  if ( (*((_WORD *)this + 2) & 1) != 0 )
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::PrebuiltLoader::getExportsTrie(this, a2, a3);
  }
  else
  {
    if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::JustInTimeLoader::getExportsTrie(this, a2, a3);
  }
}
