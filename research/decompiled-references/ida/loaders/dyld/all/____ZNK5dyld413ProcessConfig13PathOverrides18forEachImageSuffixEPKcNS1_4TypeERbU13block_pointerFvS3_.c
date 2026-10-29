__int64 __fastcall ___ZNK5dyld413ProcessConfig13PathOverrides18forEachImageSuffixEPKcNS1_4TypeERbU13block_pointerFvS3_S4_S5_E_block_invoke(
        __int64 a1,
        const char *a2)
{
  const char *v4; // x21
  size_t v5; // x22
  dyld4::ProcessConfig::PathOverrides *v6; // x0
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(const char **)(a1 + 48);
  v5 = _platform_strlen(v4);
  v6 = (dyld4::ProcessConfig::PathOverrides *)_platform_strlen(a2);
  dyld4::ProcessConfig::PathOverrides::addSuffix(
    v6,
    v4,
    a2,
    (char *)&v8 - (((unsigned __int64)v6 + v5 + 23) & 0xFFFFFFFFFFFFFFF0LL));
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}
