const char *__fastcall dyld4::ProcessConfig::PathOverrides::forEachImageSuffix(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  const char *v10; // x0
  const char *result; // x0
  __int64 (__fastcall *v12)(__int64); // x5
  _QWORD v13[8]; // [xsp+0h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v10 = *(const char **)(a1 + 104);
  if ( v10 )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZNK5dyld413ProcessConfig13PathOverrides18forEachImageSuffixEPKcNS1_4TypeERbU13block_pointerFvS3_S4_S5_E_block_invoke;
    v13[3] = &unk_94E78;
    v13[4] = a5;
    v13[5] = a1;
    v13[6] = a2;
    v13[7] = a4;
    result = dyld4::ProcessConfig::PathOverrides::forEachInColonList(v10, 0, a4, (__int64)v13);
    if ( !*a4 )
      return (const char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(a5 + 16))(a5, a2, a3, a4);
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(__int64))(a5 + 16);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const char *)v12(a5);
  }
  return result;
}
