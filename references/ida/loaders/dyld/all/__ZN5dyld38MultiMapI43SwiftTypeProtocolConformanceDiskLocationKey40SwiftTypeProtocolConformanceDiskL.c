__int64 __fastcall dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::MultiMap(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // x22
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 *v9; // x8
  __int64 v10; // x21

  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_QWORD *)a1 = *a3;
  *(_QWORD *)(a1 + 8) = a3[1];
  v5 = a3 + 3;
  v6 = a3[2];
  *(_QWORD *)(a1 + 16) = a3 + 3;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v6 )
  {
    v7 = dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::reserve();
    v8 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 32) = v6;
    if ( v8 )
      dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::MultiMap(v7);
  }
  v9 = &v5[v6];
  v10 = *v9;
  *(_QWORD *)(a1 + 56) = v9 + 1;
  *(_QWORD *)(a1 + 64) = v10;
  if ( v10 )
  {
    dyld3::OverflowSafeArray<dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::NodeEntryT,4294967295ul>::reserve(
      a1 + 56,
      v10);
    *(_QWORD *)(a1 + 72) = v10;
  }
  *(_QWORD *)(a1 + 96) = a2;
  return a1;
}
