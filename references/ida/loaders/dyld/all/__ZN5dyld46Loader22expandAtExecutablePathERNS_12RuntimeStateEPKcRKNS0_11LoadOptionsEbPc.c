bool __fastcall dyld4::Loader::expandAtExecutablePath(
        dyld4::RuntimeState *a1,
        char *__s1,
        __int64 a3,
        __int64 a4,
        char *a5)
{
  char *v8; // x3
  int v10; // w8
  __int64 v12; // x8
  dyld4::Loader *v13; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( _platform_strncmp(__s1, "@executable_path", 0x10u) )
    return 0;
  v10 = (unsigned __int8)__s1[16];
  if ( v10 != 47 && v10 != 0 )
    return 0;
  v12 = *((_QWORD *)a1 + 1);
  if ( !*(_BYTE *)(v12 + 169) )
  {
    if ( *(_BYTE *)(v12 + 188) )
      dyld4::RuntimeState::log(a1, "    @executable_path not expanded due to security policy\n");
    return 0;
  }
  v13 = *(dyld4::Loader **)(v12 + 16);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::Loader::expandAndNormalizeAtExecutablePath(v13, __s1, a5, v8);
}
