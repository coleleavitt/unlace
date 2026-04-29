bool __fastcall DyldSharedCache::inDyldCache(
        DyldSharedCache *this,
        const DyldSharedCache *a2,
        const dyld3::MachOFile *a3)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  int v11; // w8
  _BOOL8 result; // x0

  v11 = dyld3::MachOFile::inDyldCache(a2);
  result = 0;
  if ( this <= a2 && this )
  {
    if ( v11 )
      return (DyldSharedCache *)((char *)this + DyldSharedCache::mappedSize(this, v5, v6, v7, v8, v9, v10)) > a2;
  }
  return result;
}
