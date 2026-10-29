__int64 __fastcall dyld4::Loader::indexOfUnzipperedTwin(
        dyld4::Loader *this,
        const dyld4::RuntimeState *a2,
        unsigned __int16 a3)
{
  __int64 v3; // x9
  __int64 v5; // x8
  _WORD *v6; // x8
  const char *IndexedImagePath; // x20
  unsigned int v10; // [xsp+Ch] [xbp-14h] BYREF

  v3 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v3 + 157) )
    return (unsigned __int16)-1;
  v5 = *((_QWORD *)this + 82);
  if ( !v5 )
  {
    IndexedImagePath = (const char *)dyld4::ProcessConfig::DyldCache::getIndexedImagePath(
                                       (DyldSharedCache **)(v3 + 200),
                                       (unsigned int)a2);
    if ( !_platform_strncmp(IndexedImagePath, "/System/iOSSupport/", 0x13u) )
    {
      v10 = 0;
      if ( ((unsigned __int8)dyld4::ProcessConfig::DyldCache::indexOfPath(
                               (DyldSharedCache **)(*((_QWORD *)this + 1) + 200LL),
                               IndexedImagePath + 18,
                               &v10)
          & 1) != 0 )
        return (unsigned __int16)v10;
    }
    return (unsigned __int16)-1;
  }
  if ( *(_DWORD *)(v5 + 12) <= (unsigned int)a2 )
    dyld4::Loader::indexOfUnzipperedTwin(this, a2, a3);
  v6 = (_WORD *)(v5 + *(unsigned int *)(v5 + *(unsigned int *)(v5 + 16) + 4LL * (unsigned int)a2));
  if ( (v6[2] & 1) == 0 || (v6[10] & 4) == 0 )
    return (unsigned __int16)-1;
  return (unsigned __int16)v6[18];
}
