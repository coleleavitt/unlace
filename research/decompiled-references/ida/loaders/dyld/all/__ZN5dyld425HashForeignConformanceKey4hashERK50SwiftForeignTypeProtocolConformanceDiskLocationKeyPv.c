__int64 __fastcall dyld4::HashForeignConformanceKey::hash(__int64 a1, dyld4::RuntimeState *a2)
{
  const void *v3; // x20
  __int64 v4; // x19
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  if ( a2 )
    v3 = (const void *)dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 8), a2);
  else
    v3 = *(const void **)a1;
  v6 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 24)) & 0xFFF;
  v4 = murmurHash(v3, *(_DWORD *)(a1 + 16), 0);
  return murmurHash(&v6, 8, 0) ^ v4;
}
