__int64 __fastcall dyld4::APIs::dyld_shared_cache_find_iterate_text(
        dyld4::RuntimeState *this,
        dyld4::RuntimeState *a2,
        char **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v9; // x8
  DyldSharedCache *CacheInDirAndMap; // x23
  __int64 v11; // x2
  unsigned __int64 v12; // x3
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x26
  char *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x26
  char *v19; // x1
  char *v20; // x2
  char **v21; // x22
  char *v22; // t1
  __int64 result; // x0
  _QWORD v24[6]; // [xsp+8h] [xbp-4C8h] BYREF
  _QWORD v25[5]; // [xsp+38h] [xbp-498h] BYREF
  size_t v26; // [xsp+60h] [xbp-470h] BYREF
  __n128 v27; // [xsp+68h] [xbp-468h] BYREF
  __int64 v28; // [xsp+78h] [xbp-458h]
  __int64 v29; // [xsp+80h] [xbp-450h]

  v9 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v9 + 184) )
  {
    dyld4::RuntimeState::log(this, "dyld_shared_cache_find_iterate_text()\n");
    v9 = *((_QWORD *)this + 1);
  }
  v26 = 0;
  CacheInDirAndMap = *(DyldSharedCache **)(v9 + 200);
  if ( !CacheInDirAndMap
    || (v27 = 0u, DyldSharedCache::getUUID(CacheInDirAndMap, &v27), *(_OWORD *)&v27 != *(_OWORD *)a2) )
  {
    CacheInDirAndMap = (DyldSharedCache *)dyld4::findCacheInDirAndMap(
                                            this,
                                            a2,
                                            "/System/Library/Caches/com.apple.dyld/",
                                            (const char *)&v26,
                                            a5);
    if ( !CacheInDirAndMap )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = cryptexPrefixes[v15];
        v27.n128_u8[0] = 0;
        if ( (unsigned __int64)dyld4::Utils::concatenatePaths(
                                 (dyld4::Utils *)&v27,
                                 v16,
                                 (const char *)&stru_3D0.offset,
                                 v12) <= 0x3FF
          && (unsigned __int64)dyld4::Utils::concatenatePaths(
                                 (dyld4::Utils *)&v27,
                                 "/System/Library/Caches/com.apple.dyld/",
                                 (const char *)&stru_3D0.offset,
                                 v12) <= 0x3FF )
        {
          v17 = dyld4::findCacheInDirAndMap(this, a2, (char *)&v27, (const char *)&v26, a5);
          if ( v17 )
            break;
        }
        if ( ++v15 == 3 )
        {
          CacheInDirAndMap = (DyldSharedCache *)dyld4::findCacheInDirAndMap(
                                                  this,
                                                  a2,
                                                  "/System/DriverKit/System/Library/dyld/",
                                                  (const char *)&v26,
                                                  a5);
          if ( CacheInDirAndMap )
            goto LABEL_23;
          v18 = 0;
          while ( 1 )
          {
            v19 = cryptexPrefixes[v18];
            v27.n128_u8[0] = 0;
            if ( (unsigned __int64)dyld4::Utils::concatenatePaths(
                                     (dyld4::Utils *)&v27,
                                     v19,
                                     (const char *)&stru_3D0.offset,
                                     v12) <= 0x3FF
              && (unsigned __int64)dyld4::Utils::concatenatePaths(
                                     (dyld4::Utils *)&v27,
                                     "/System/DriverKit/System/Library/dyld/",
                                     (const char *)&stru_3D0.offset,
                                     v12) <= 0x3FF )
            {
              v17 = dyld4::findCacheInDirAndMap(this, a2, (char *)&v27, (const char *)&v26, a5);
              if ( v17 )
                goto LABEL_22;
            }
            if ( ++v18 == 3 )
            {
              v20 = *a3;
              if ( !*a3 )
                return 0xFFFFFFFFLL;
              v21 = a3 + 1;
              while ( 1 )
              {
                v17 = dyld4::findCacheInDirAndMap(this, a2, v20, (const char *)&v26, a5);
                if ( v17 )
                  break;
                v22 = *v21++;
                v20 = v22;
                result = 0xFFFFFFFFLL;
                if ( !v22 )
                  return result;
              }
              goto LABEL_22;
            }
          }
        }
      }
LABEL_22:
      CacheInDirAndMap = (DyldSharedCache *)v17;
    }
  }
LABEL_23:
  v27.n128_u64[0] = 0;
  v27.n128_u64[1] = (unsigned __int64)&v27;
  v28 = 0x2000000000LL;
  v29 = 0;
  v25[0] = _NSConcreteStackBlock;
  v25[1] = 0x40000000;
  v25[2] = ___ZN5dyld44APIs35dyld_shared_cache_find_iterate_textEPKhPPKcU13block_pointerFvPK33dyld_shared_cache_dylib_text_infoE_block_invoke;
  v25[3] = &unk_96A18;
  v25[4] = &v27;
  DyldSharedCache::forEachRegion(CacheInDirAndMap, v25, v11, v12, a5, v13, v14);
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 0x40000000;
  v24[2] = ___ZN5dyld44APIs35dyld_shared_cache_find_iterate_textEPKhPPKcU13block_pointerFvPK33dyld_shared_cache_dylib_text_infoE_block_invoke_2;
  v24[3] = &unk_96A40;
  v24[4] = a4;
  v24[5] = &v27;
  DyldSharedCache::forEachImageTextSegment((__int64)CacheInDirAndMap, (__int64)v24);
  if ( v26 )
    munmap(CacheInDirAndMap, v26);
  _Block_object_dispose(&v27, 8);
  return 0;
}
