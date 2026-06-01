bool __fastcall dyld4::Loader::expandAtLoaderPath(
        dyld4::RuntimeState *a1,
        char *__s1,
        __int64 a3,
        dyld4::Loader *a4,
        int a5,
        char *a6)
{
  int v13; // w8
  const char *v14; // x19
  int v15; // t1
  __int64 v17; // x8
  bool v18; // zf
  const char *v20; // x0
  char *v21; // x0

  if ( _platform_strncmp(__s1, "@loader_path", 0xCu) )
    return 0;
  v15 = (unsigned __int8)__s1[12];
  v14 = __s1 + 12;
  v13 = v15;
  if ( v15 != 47 && v13 != 0 )
    return 0;
  v17 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(a3 + 6) )
  {
    if ( *(_BYTE *)(v17 + 188) )
      dyld4::RuntimeState::log(a1, "    @loader_path not allowed in DYLD_INSERT_LIBRARIES\n");
    return 0;
  }
  if ( *(_BYTE *)(v17 + 169) )
    v18 = 1;
  else
    v18 = a5 == 0;
  if ( !v18 && *((_QWORD *)a1 + 3) == (_QWORD)a4 )
  {
    if ( *(_BYTE *)(v17 + 188) )
      dyld4::RuntimeState::log(
        a1,
        "    @loader_path in LC_RPATH from main executable not expanded due to security policy\n");
    return 0;
  }
  v20 = (const char *)dyld4::Loader::path(a4);
  strlcpy(a6, v20, 0x400u);
  v21 = strrchr(a6, 47);
  if ( v21 )
    v21 = strcpy(v21, v14);
  return v21 != nullptr;
}
