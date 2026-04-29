__int64 __fastcall DyldSharedCache::getIndexedImageEntry(DyldSharedCache *this, int a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9

  v2 = *((unsigned int *)this + 4);
  v3 = 24;
  if ( v2 > 0x1C3 )
    v3 = 448;
  return (__int64)this
       + *(_QWORD *)((char *)this + 32 * a2 + *(unsigned int *)((char *)this + v3))
       - *(_QWORD *)((char *)this + v2);
}
