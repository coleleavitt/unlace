bool __fastcall dyld4::EqualMetadataConformanceKey::equal(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // w21
  int v6; // w20

  v4 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)a1);
  if ( (((unsigned __int16)dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)a2)
       ^ v4)
      & 0xFFF) != 0 )
    return 0;
  v6 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 8));
  return (((unsigned int)dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a2 + 8))
         ^ v6)
        & 0xFFFLL) == 0;
}
