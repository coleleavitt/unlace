bool __fastcall dyld4::EqualForeignConformanceKey::equal(__int64 a1, __int64 a2, dyld4::RuntimeState *a3)
{
  const char *v6; // x21
  const char *v7; // x1
  size_t v8; // x22
  bool v9; // zf
  int v11; // w20

  if ( a3 )
  {
    v6 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 8), a3);
    v7 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value((dyld4::PrebuiltLoader::BindTargetRef *)(a2 + 8), a3);
  }
  else
  {
    v6 = *(const char **)a1;
    v7 = *(const char **)a2;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( _platform_strncmp(v6, v7, v8) )
    v9 = 0;
  else
    v9 = v8 == *(_QWORD *)(a2 + 16);
  if ( !v9 )
    return 0;
  v11 = dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a1 + 24));
  return (((unsigned int)dyld4::PrebuiltLoader::BindTargetRef::offset((dyld4::PrebuiltLoader::BindTargetRef *)(a2 + 24))
         ^ v11)
        & 0xFFFLL) == 0;
}
