bool __fastcall dyld4::EqualMetadataConformanceLookupKey::equal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        dyld4::RuntimeState *a4)
{
  if ( !a4 )
    dyld4::EqualMetadataConformanceLookupKey::equal();
  return dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)a1, a4) == a2
      && dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 8), a4) == a3;
}
