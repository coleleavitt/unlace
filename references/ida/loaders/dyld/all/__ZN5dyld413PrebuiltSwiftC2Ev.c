dyld4::PrebuiltSwift *__fastcall dyld4::PrebuiltSwift::PrebuiltSwift(dyld4::PrebuiltSwift *this)
{
  __int64 v2; // x0

  v2 = dyld3::MultiMap<SwiftTypeProtocolConformanceDiskLocationKey,SwiftTypeProtocolConformanceDiskLocation,dyld4::HashTypeConformanceKey,dyld4::EqualTypeConformanceKey>::MultiMap(
         this,
         0);
  dyld3::MultiMap<SwiftMetadataProtocolConformanceDiskLocationKey,SwiftMetadataProtocolConformanceDiskLocation,dyld4::HashMetadataConformanceKey,dyld4::EqualMetadataConformanceKey>::MultiMap(
    v2 + 104,
    0);
  dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::MultiMap(
    (char *)this + 208,
    0);
  *((_BYTE *)this + 312) = 0;
  return this;
}
