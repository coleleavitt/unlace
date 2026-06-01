__int64 __fastcall DyldSharedCache::getIndexedImageEntry(
        DyldSharedCache *this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x9

  v4 = *((unsigned int *)this + 4);
  v5 = 24;
  if ( v4 > 0x1C3 )
    v5 = 448;
  v6 = (_QWORD *)((char *)this + 32 * a2 + *(unsigned int *)((char *)this + v5));
  *a3 = v6[1];
  *a4 = v6[2];
  return (__int64)this + *v6 - *(_QWORD *)((char *)this + v4);
}
