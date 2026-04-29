__int64 __fastcall dyld4::APIs::_dyld_find_foreign_type_protocol_conformance_on_disk(
        dyld4::APIs *this,
        dyld4::PrebuiltLoader::BindTargetRef *a2,
        dyld4::PrebuiltLoader::BindTargetRef *a3,
        __int64 a4)
{
  dyld4::PrebuiltLoaderSet *v4; // x20
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x25
  __int64 v13; // x24
  dyld4::APIs *v14; // x0
  const void *v15; // x1
  const char *v16; // x2
  unsigned __int64 v17; // x3
  unsigned int v18; // w4
  __int64 v20; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v21[4]; // [xsp+10h] [xbp-60h] BYREF

  v4 = *((dyld4::PrebuiltLoaderSet **)this + 85);
  if ( !v4 )
    return 2;
  if ( !dyld4::PrebuiltLoaderSet::hasOptimizedSwift(*((dyld4::PrebuiltLoaderSet **)this + 85)) )
    return 2;
  if ( !dyld4::PrebuiltLoaderSet::swiftForeignTypeProtocolTable(v4) )
    return 2;
  if ( !*((_QWORD *)this + 41) )
    return 2;
  v21[0] = 0;
  v21[1] = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a3, v9);
  v21[2] = a4;
  v21[3] = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a2, v10);
  v11 = dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::find(
          *((_QWORD *)this + 41),
          v21);
  if ( v11 == *(_QWORD *)(*((_QWORD *)this + 41) + 56LL) + 48LL * *(_QWORD *)(*((_QWORD *)this + 41) + 72LL) )
    return 2;
  v12 = v11;
  if ( (dyld4::EqualForeignConformanceLookupKey::equal(v11, (int)a3, a4, (int)a2, this) & 1) != 0 )
  {
LABEL_10:
    v20 = *(_QWORD *)(v12 + 32);
    v14 = (dyld4::APIs *)dyld4::PrebuiltLoader::BindTargetRef::loaderRef((dyld4::PrebuiltLoader::BindTargetRef *)&v20);
    if ( *((_DWORD *)v4 + 3) <= ((unsigned __int16)v14 & 0x7FFFu) )
      dyld4::APIs::_dyld_find_foreign_type_protocol_conformance_on_disk(v14, v15, v16, v17, v18);
    dyld4::PrebuiltLoader::loadAddress(
      (dyld4::PrebuiltLoaderSet *)((char *)v4
                                 + *(unsigned int *)((char *)v4
                                                   + 4 * ((unsigned __int16)v14 & 0x7FFF)
                                                   + *((unsigned int *)v4 + 4))),
      this);
    dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)&v20);
    return 0;
  }
  else
  {
    v13 = 2;
    while ( (*(_BYTE *)(v12 + 40) & 3) != 0 )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, __int64))dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::nextDuplicate)(
              *((_QWORD *)this + 41),
              v12);
      if ( (unsigned int)dyld4::EqualForeignConformanceLookupKey::equal(v12, (int)a3, a4, (int)a2, this) )
        goto LABEL_10;
    }
  }
  return v13;
}
