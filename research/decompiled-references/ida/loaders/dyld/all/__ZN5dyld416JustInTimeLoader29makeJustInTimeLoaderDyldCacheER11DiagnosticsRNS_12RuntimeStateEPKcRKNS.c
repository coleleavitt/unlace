dyld4::Loader *__fastcall dyld4::JustInTimeLoader::makeJustInTimeLoaderDyldCache(
        Diagnostics *a1,
        dyld4::RuntimeState *a2,
        const char *a3,
        int a4,
        int a5)
{
  __int16 v5; // w21
  dyld3::MachOFile *IndexedImageEntry; // x22
  __int64 v10; // x8
  char v11; // w9
  int v12; // w7
  __int16 v13; // w8
  dyld4::Loader *v14; // x22
  dyld4::Loader *v15; // x0
  __int64 v16; // x8
  unsigned int v18; // [xsp+1Ch] [xbp-64h] BYREF
  __int128 v19; // [xsp+20h] [xbp-60h] BYREF
  unsigned __int64 v20; // [xsp+30h] [xbp-50h]
  char v21; // [xsp+38h] [xbp-48h]
  unsigned __int64 v22; // [xsp+40h] [xbp-40h] BYREF
  unsigned __int64 v23; // [xsp+48h] [xbp-38h] BYREF

  v5 = a5;
  v23 = 0;
  v22 = 0;
  IndexedImageEntry = (dyld3::MachOFile *)dyld4::ProcessConfig::DyldCache::getIndexedImageEntry(
                                            (DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL),
                                            a5,
                                            &v23,
                                            &v22);
  v10 = *((_QWORD *)a2 + 1);
  v11 = *(_BYTE *)(v10 + 341);
  v19 = v22;
  v20 = v23;
  v21 = v11;
  if ( (dyld3::MachOFile::loadableIntoProcess((__int64)IndexedImageEntry, *(unsigned int *)(v10 + 68), a3) & 1) != 0 )
  {
    if ( _platform_strncmp(a3, "/System/iOSSupport/", 0x13u) )
    {
      v12 = 0;
      v13 = 0;
    }
    else
    {
      v18 = 0;
      v12 = (unsigned int)dyld4::ProcessConfig::DyldCache::indexOfPath(
                            (DyldSharedCache **)(*((_QWORD *)a2 + 1) + 200LL),
                            a3 + 18,
                            &v18);
      v13 = v18;
      if ( !v12 )
        v13 = 0;
    }
    v15 = (dyld4::Loader *)dyld4::JustInTimeLoader::make((__int64)a2, IndexedImageEntry, a3, &v19, 0, 1, 0, v12, v13);
    v14 = v15;
    *((_WORD *)v15 + 3) = *((_WORD *)v15 + 3) & 0x8000 | v5 & 0x7FFF;
    v16 = *((_QWORD *)a2 + 1);
    if ( *(_BYTE *)(v16 + 181) )
    {
      dyld4::Loader::logSegmentsFromSharedCache(v15, a2);
      v16 = *((_QWORD *)a2 + 1);
    }
    if ( *(_BYTE *)(v16 + 180) )
      dyld4::Loader::logLoad(v14, a2, a3);
  }
  else
  {
    Diagnostics::error(a1, "wrong platform to load into process");
    return nullptr;
  }
  return v14;
}
