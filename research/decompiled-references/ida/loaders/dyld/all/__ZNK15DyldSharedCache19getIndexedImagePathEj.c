__int64 __fastcall DyldSharedCache::getIndexedImagePath(DyldSharedCache *this, int a2)
{
  __int64 v2; // x8

  v2 = 24;
  if ( *((_DWORD *)this + 4) > 0x1C3u )
    v2 = 448;
  return (__int64)this + *(unsigned int *)((char *)this + 32 * a2 + *(unsigned int *)((char *)this + v2) + 24);
}
