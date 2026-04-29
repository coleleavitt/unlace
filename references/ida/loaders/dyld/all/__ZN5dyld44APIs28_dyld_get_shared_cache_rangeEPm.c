const void *__fastcall dyld4::APIs::_dyld_get_shared_cache_range(
        dyld4::APIs *this,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // x8
  const void *v10; // x21
  __int64 v11; // x0

  *a2 = 0;
  v9 = *((_QWORD *)this + 1);
  v10 = *(const void **)(v9 + 200);
  if ( v10 )
  {
    v11 = DyldSharedCache::mappedSize(*(DyldSharedCache **)(v9 + 200), (__int64)a2, a3, a4, a5, a6, a7);
    *a2 = v11;
    v9 = *((_QWORD *)this + 1);
  }
  else
  {
    v11 = 0;
  }
  if ( *(_BYTE *)(v9 + 184) )
    dyld4::RuntimeState::log(this, "_dyld_get_shared_cache_range(%p) => %p,0x%lX\n", a2, v10, v11);
  return v10;
}
