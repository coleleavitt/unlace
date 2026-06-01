__int64 __fastcall DyldSharedCache::getImageFromPath(DyldSharedCache *this, const char *a2)
{
  __int64 v3; // x20
  __int64 v4; // x8
  __int64 v5; // x21
  unsigned int v7; // [xsp+Ch] [xbp-24h] BYREF

  v3 = *((unsigned int *)this + 4);
  v4 = 24;
  if ( (unsigned int)v3 > 0x1C3 )
    v4 = 448;
  v5 = *(unsigned int *)((char *)this + v4);
  v7 = 0;
  if ( (unsigned int)DyldSharedCache::hasImagePath(this, a2, &v7) )
    return (__int64)this + *(_QWORD *)((char *)this + 32 * v7 + v5) - *(_QWORD *)((char *)this + v3);
  else
    return 0;
}
