void __fastcall dyld3::MachOAnalyzer::forEachIndirectPointer(dyld3::MachOFile *a1, Diagnostics *a2)
{
  int v4; // w27
  _QWORD v5[3]; // [xsp+88h] [xbp-E8h] BYREF
  char v6; // [xsp+A0h] [xbp-D0h]
  _BYTE v7[24]; // [xsp+A8h] [xbp-C8h] BYREF
  __int64 v8; // [xsp+C0h] [xbp-B0h]
  __int64 v9; // [xsp+C8h] [xbp-A8h]
  _BYTE v10[48]; // [xsp+F0h] [xbp-80h] BYREF

  dyld3::MachOLoaded::getLinkEditPointers((__int64)a1, a2, (__int64)v7);
  if ( !Diagnostics::hasError(a2) )
  {
    dyld3::MachOFile::is64(a1);
    dyld3::MachOLoaded::getLinkEditContent((__int64)a1, (__int64)v10, *(_DWORD *)(v9 + 56));
    v4 = *(_DWORD *)(v9 + 60);
    dyld3::MachOFile::pointerSize(a1);
    dyld3::MachOLoaded::getLinkEditContent((__int64)a1, (__int64)v10, *(_DWORD *)(v8 + 8));
    dyld3::MachOLoaded::getLinkEditContent((__int64)a1, (__int64)v10, *(_DWORD *)(v8 + 16));
    v5[0] = 0;
    v5[1] = v5;
    v5[2] = 0x2000000000LL;
    v6 = 0;
    if ( v4 || !dyld3::MachOFile::isKextBundle(a1) )
      dyld3::MachOFile::forEachSection((int)a1);
    _Block_object_dispose(v5, 8);
  }
}
