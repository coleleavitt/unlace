__int64 __fastcall dyld4::ProcessConfig::PathOverrides::forEachFrameworkFallback(
        __int64 a1,
        unsigned int a2,
        int a3,
        _BYTE *a4,
        __int64 a5)
{
  __int64 result; // x0
  __int64 v10; // x1
  __int64 (__fastcall *v11)(__int64, const char *, __int64, _BYTE *); // x5
  int v12; // w8
  _QWORD v13[6]; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  result = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 72);
  if ( result | v10 )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZNK5dyld413ProcessConfig13PathOverrides24forEachFrameworkFallbackEN5dyld38PlatformEbRbU13block_pointerFvPKcNS1_4TypeES4_E_block_invoke;
    v13[3] = &unk_94598;
    v13[4] = a5;
    v13[5] = a4;
    return (__int64)dyld4::ProcessConfig::PathOverrides::forEachInColonList((const char *)result, v10, a4, (__int64)v13);
  }
  if ( a3 && a2 <= 0xC )
  {
    if ( ((1 << a2) & 0x1BFD) != 0 )
    {
      if ( *(_DWORD *)(a1 + 136) == 2 )
        return result;
    }
    else
    {
      if ( a2 != 1 )
        return result;
      v12 = *(_DWORD *)(a1 + 136);
      if ( v12 != 1 )
      {
        if ( v12 )
          return result;
        result = (*(__int64 (__fastcall **)(__int64, const char *, __int64, _BYTE *))(a5 + 16))(
                   a5,
                   "/Library/Frameworks",
                   15,
                   a4);
        if ( *a4 )
          return result;
      }
    }
    v11 = *(__int64 (__fastcall **)(__int64, const char *, __int64, _BYTE *))(a5 + 16);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v11(a5, "/System/Library/Frameworks", 15, a4);
  }
  return result;
}
