unsigned __int64 __fastcall dyld4::HashMetadataConformanceKey::hash(__int64 a1)
{
  unsigned __int64 v2; // x19
  unsigned __int64 v4; // [xsp+0h] [xbp-20h] BYREF
  unsigned __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)a1) & 0xFFF;
  v4 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 8)) & 0xFFF;
  v2 = murmurHash((unsigned __int8 *)&v5, 8, 0);
  return murmurHash((unsigned __int8 *)&v4, 8, 0) ^ v2;
}
