__int64 __fastcall dyld4::APIs::_dyld_find_protocol_conformance_on_disk(
        dyld4::APIs *this,
        dyld4::PrebuiltLoader::BindTargetRef *a2,
        dyld4::PrebuiltLoader::BindTargetRef *a3,
        dyld4::PrebuiltLoader::BindTargetRef *a4)
{
  dyld4::PrebuiltLoaderSet *v4; // x20
  __int64 v9; // x0
  unsigned __int64 v10; // x1
  unsigned __int64 v11; // x1
  __int64 v12; // x0
  __int64 Duplicate; // x24
  dyld4::PrebuiltLoader::BindTargetRef *v14; // x21
  dyld4::APIs *v15; // x0
  const void *v16; // x1
  const void *v17; // x2
  const void *v18; // x3
  unsigned int v19; // w4
  unsigned int v20; // w8
  __int64 v21; // x8
  __int64 result; // x0
  unsigned __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x23
  dyld4::APIs *v26; // x0
  const void *v27; // x1
  const void *v28; // x2
  const void *v29; // x3
  unsigned int v30; // w4
  unsigned __int64 Absolute; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v32; // [xsp+8h] [xbp-38h]

  v4 = *((dyld4::PrebuiltLoaderSet **)this + 85);
  if ( !v4 || !dyld4::PrebuiltLoaderSet::hasOptimizedSwift(*((dyld4::PrebuiltLoaderSet **)this + 85)) )
    return 2;
  v9 = dyld4::PrebuiltLoaderSet::swiftTypeProtocolTable(v4);
  if ( a4 )
  {
    if ( v9 )
    {
      if ( *((_QWORD *)this + 39) )
      {
        Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a4, v10);
        v32 = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a2, v11);
        v12 = dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::find(
                *((_QWORD *)this + 39),
                &Absolute);
        if ( v12 != *(_QWORD *)(*((_QWORD *)this + 39) + 56LL) + 32LL * *(_QWORD *)(*((_QWORD *)this + 39) + 72LL) )
        {
          Duplicate = v12;
          if ( (dyld4::EqualTypeConformanceLookupKey::equal(v12, (int)a4, (int)a2, this) & 1) != 0 )
          {
LABEL_10:
            v14 = (dyld4::PrebuiltLoader::BindTargetRef *)(Duplicate + 16);
            v15 = (dyld4::APIs *)dyld4::PrebuiltLoader::BindTargetRef::loaderRef((dyld4::PrebuiltLoader::BindTargetRef *)(Duplicate + 16));
            v20 = (unsigned __int16)v15 & 0x7FFF;
            if ( *((_DWORD *)v4 + 3) <= v20 )
              dyld4::APIs::_dyld_find_protocol_conformance_on_disk(v15, v16, v17, v18, v19);
            goto LABEL_20;
          }
          while ( (*(_BYTE *)(Duplicate + 24) & 3) != 0 )
          {
            Duplicate = dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::nextDuplicate(
                          *((_QWORD *)this + 39),
                          Duplicate);
            if ( (unsigned int)dyld4::EqualTypeConformanceLookupKey::equal(Duplicate, (int)a4, (int)a2, this) )
              goto LABEL_10;
          }
        }
      }
    }
  }
  v21 = dyld4::PrebuiltLoaderSet::swiftMetadataProtocolTable(v4);
  result = 2;
  if ( a3 && v21 )
  {
    if ( *((_QWORD *)this + 40) )
    {
      Absolute = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a3, 0);
      v32 = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(a2, v23);
      v24 = dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::find(
              *((_QWORD *)this + 40),
              &Absolute);
      if ( v24 != *(_QWORD *)(*((_QWORD *)this + 40) + 56LL) + 32LL * *(_QWORD *)(*((_QWORD *)this + 40) + 72LL) )
      {
        v25 = v24;
        if ( (dyld4::EqualMetadataConformanceLookupKey::equal(v24, (int)a3, (int)a2, this) & 1) == 0 )
        {
          while ( (*(_BYTE *)(v25 + 24) & 3) != 0 )
          {
            v25 = dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::nextDuplicate(
                    *((_QWORD *)this + 40),
                    v25);
            if ( (unsigned int)dyld4::EqualMetadataConformanceLookupKey::equal(v25, (int)a3, (int)a2, this) )
              goto LABEL_19;
          }
          return 2;
        }
LABEL_19:
        v14 = (dyld4::PrebuiltLoader::BindTargetRef *)(v25 + 16);
        v26 = (dyld4::APIs *)dyld4::PrebuiltLoader::BindTargetRef::loaderRef((dyld4::PrebuiltLoader::BindTargetRef *)(v25 + 16));
        v20 = (unsigned __int16)v26 & 0x7FFF;
        if ( *((_DWORD *)v4 + 3) <= v20 )
          dyld4::APIs::_dyld_find_protocol_conformance_on_disk(v26, v27, v28, v29, v30);
LABEL_20:
        dyld4::PrebuiltLoader::loadAddress(
          (dyld4::PrebuiltLoaderSet *)((char *)v4 + *(unsigned int *)((char *)v4 + 4 * v20 + *((unsigned int *)v4 + 4))),
          this);
        dyld4::PrebuiltLoader::BindTargetRef::offset(v14);
        return 0;
      }
    }
    return 2;
  }
  return result;
}
