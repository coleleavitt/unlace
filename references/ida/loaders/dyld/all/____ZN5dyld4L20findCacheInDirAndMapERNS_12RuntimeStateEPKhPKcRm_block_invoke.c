void __fastcall ___ZN5dyld4L20findCacheInDirAndMapERNS_12RuntimeStateEPKhPKcRm_block_invoke(
        __int64 a1,
        dyld3 *a2,
        DyldSharedCache *this)
{
  off_t st_size; // x20
  int v6; // w0
  int v7; // w21
  void *v8; // x22
  void *v9; // x8
  __int64 v10; // x8
  stat v11; // [xsp+8h] [xbp-B8h] BYREF

  if ( (DyldSharedCache::isSubCachePath(this, (const char *)a2) & 1) == 0
    && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) )
  {
    if ( stat((const char *)a2, &v11) == -1 )
    {
      v9 = nullptr;
      st_size = 0x100000;
    }
    else
    {
      if ( v11.st_size >= 0x100000uLL )
        st_size = 0x100000;
      else
        st_size = v11.st_size;
      v6 = dyld3::open(a2, nullptr, 0);
      if ( v6 < 0 )
      {
        v9 = nullptr;
      }
      else
      {
        v7 = v6;
        v8 = mmap(nullptr, st_size, 1, 2, v6, 0);
        close(v7);
        if ( v8 == (void *)-1LL )
          v9 = nullptr;
        else
          v9 = v8;
      }
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = v9;
    v10 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) )
    {
      *(_QWORD *)&v11.st_dev = 0;
      v11.st_ino = 0;
      DyldSharedCache::getUUID(*(DyldSharedCache **)(*(_QWORD *)(v10 + 8) + 24LL), (__n128 *)&v11);
      if ( *(_OWORD *)&v11.st_dev == *(_OWORD *)*(_QWORD *)(a1 + 40) )
      {
        **(_QWORD **)(a1 + 48) = st_size;
      }
      else
      {
        munmap(*(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL), st_size);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 0;
      }
    }
  }
}
