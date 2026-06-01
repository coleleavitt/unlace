__int64 __fastcall DyldSharedCache::imagesCount(DyldSharedCache *this)
{
  __int64 v1; // x8

  v1 = 28;
  if ( *((_DWORD *)this + 4) > 0x1C3u )
    v1 = 452;
  return *(unsigned int *)((char *)this + v1);
}
