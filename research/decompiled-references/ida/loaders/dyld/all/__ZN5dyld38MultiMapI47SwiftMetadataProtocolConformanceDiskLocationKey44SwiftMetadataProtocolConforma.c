__int64 __fastcall dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::MultiMap(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // x0
  _QWORD *v6; // x22
  unsigned __int64 v7; // x21
  _QWORD *v8; // x0
  __int64 v9; // x8
  __int64 *v10; // x8
  __int64 v11; // x21

  *(_OWORD *)(a1 + 16) = 0u;
  v5 = (_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_QWORD *)a1 = *a3;
  *(_QWORD *)(a1 + 8) = a3[1];
  v6 = a3 + 3;
  v7 = a3[2];
  *v5 = a3 + 3;
  *(_QWORD *)(a1 + 24) = v7;
  if ( v7 )
  {
    v8 = dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::reserve(v5, v7);
    v9 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 32) = v7;
    if ( v9 )
      dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::MultiMap(v8);
  }
  v10 = &v6[v7];
  v11 = *v10;
  *(_QWORD *)(a1 + 56) = v10 + 1;
  *(_QWORD *)(a1 + 64) = v11;
  if ( v11 )
  {
    dyld3::OverflowSafeArray<dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::NodeEntryT,4294967295ul>::reserve(
      a1 + 56,
      v11);
    *(_QWORD *)(a1 + 72) = v11;
  }
  *(_QWORD *)(a1 + 96) = a2;
  return a1;
}
