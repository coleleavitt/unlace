const char *__fastcall ___ZNK5dyld413ProcessConfig13PathOverrides18forEachPathVariantEPKcN5dyld38PlatformEbbRbU13block_pointerFvS3_NS1_4TypeES6_E_block_invoke(
        __int64 a1,
        char *__s)
{
  __int64 v4; // x21
  char *v5; // x22
  __int64 v7; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = (char *)&v7 - ((_platform_strlen(__s) + *(_QWORD *)(a1 + 48) + 23) & 0xFFFFFFFFFFFFFFF0LL);
  strcpy(v5, __s);
  *(_WORD *)&v5[_platform_strlen(v5)] = 47;
  strcat(v5, *(const char **)(a1 + 56));
  return dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(
           v4,
           (__int64)v5,
           0,
           *(_BYTE **)(a1 + 64),
           *(_QWORD *)(a1 + 32));
}
