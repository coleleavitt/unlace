__int64 __fastcall dyld3::reuseExistingCache(__int64 a1, __int64 a2)
{
  char *v5; // x19
  __int64 v6; // x8
  bool v7; // w9
  __int64 v8; // x22
  const char *v9; // x1
  const char *v10; // x1
  char *__s1; // [xsp+10h] [xbp-440h] BYREF
  char v12[1024]; // [xsp+18h] [xbp-438h] BYREF

  __s1 = nullptr;
  if ( (unsigned int)__shared_region_check_np(&__s1) )
    return 0;
  v5 = __s1;
  if ( _platform_strcmp(__s1, "dyld_v1  arm64e") )
  {
    *(_QWORD *)(a2 + 16) = "existing shared cache in memory is not compatible";
    return 0;
  }
  else
  {
    *(_QWORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = DyldSharedCache::slide((DyldSharedCache *)v5);
    v6 = *((_QWORD *)v5 + 13);
    v7 = v6 == 2 && *((_DWORD *)v5 + 114) == 0;
    *(_BYTE *)(a2 + 48) = v6 == 0 || v7;
    v8 = *((_QWORD *)v5 + 62) + *(_QWORD *)a2;
    if ( _platform_strncmp((const char *)v8, "dyld_data    v0", 0x10u) )
      dyld4::console((dyld4 *)"mapped cache does not contain dynamic config data\n", v9);
    else
      *(_OWORD *)(a2 + 32) = *(_OWORD *)(v8 + 16);
    if ( *(_BYTE *)(a1 + 6) )
    {
      if ( fsgetpath(v12, 0x400u, (fsid_t *)(a2 + 32), *(_QWORD *)(a2 + 40)) >= 1 )
        dyld4::console((dyld4 *)"re-using existing shared cache (%s):\n", v10, v12);
      dyld3::verboseSharedCacheMappings((dyld3 *)v5, (const DyldSharedCache *)v10);
    }
    return 1;
  }
}
