__int64 __fastcall dyld4::ProcessConfig::PathOverrides::forEachDylibFallback(
        __int64 a1,
        unsigned int a2,
        int a3,
        _BYTE *a4,
        __int64 a5)
{
  __int64 result; // x0
  __int64 v10; // x1
  int v11; // w8
  __int64 (__fastcall *v12)(__int64, const char *, __int64, _BYTE *); // x5
  _QWORD v13[6]; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  result = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 64);
  if ( result | v10 )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZNK5dyld413ProcessConfig13PathOverrides20forEachDylibFallbackEN5dyld38PlatformEbRbU13block_pointerFvPKcNS1_4TypeES4_E_block_invoke;
    v13[3] = &unk_94E50;
    v13[4] = a5;
    v13[5] = a4;
    return (__int64)dyld4::ProcessConfig::PathOverrides::forEachInColonList((const char *)result, v10, a4, (__int64)v13);
  }
  if ( a3 && a2 <= 0xC )
  {
    if ( ((1 << a2) & 0x83D) != 0 )
    {
      if ( *(_DWORD *)(a1 + 136) != 2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, const char *, __int64, _BYTE *))(a5 + 16))(
                   a5,
                   "/usr/local/lib",
                   15,
                   a4);
        if ( *a4 )
          return result;
      }
    }
    else if ( ((1 << a2) & 0x13C0) == 0 )
    {
      if ( a2 != 1 )
        return result;
      v11 = *(_DWORD *)(a1 + 136);
      if ( v11 != 1 )
      {
        if ( v11 )
          return result;
        result = (*(__int64 (__fastcall **)(__int64, const char *, __int64, _BYTE *))(a5 + 16))(
                   a5,
                   "/usr/local/lib",
                   15,
                   a4);
        if ( *a4 )
          return result;
      }
      goto LABEL_16;
    }
    if ( *(_DWORD *)(a1 + 136) == 2 )
      return result;
LABEL_16:
    v12 = *(__int64 (__fastcall **)(__int64, const char *, __int64, _BYTE *))(a5 + 16);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v12(a5, "/usr/lib", 15, a4);
  }
  return result;
}
