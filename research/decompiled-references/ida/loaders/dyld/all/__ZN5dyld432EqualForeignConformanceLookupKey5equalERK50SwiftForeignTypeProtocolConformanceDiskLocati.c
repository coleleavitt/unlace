bool __fastcall dyld4::EqualForeignConformanceLookupKey::equal(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        dyld4::RuntimeState *a5)
{
  const char *v10; // x0
  size_t v11; // x24
  int v12; // w0

  if ( !a5 )
    dyld4::EqualForeignConformanceLookupKey::equal();
  v10 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 1), a5);
  v11 = a1[2];
  v12 = _platform_strncmp(v10, a2, v11);
  return v11 == a3
      && v12 == 0
      && dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 3), a5) == a4;
}
