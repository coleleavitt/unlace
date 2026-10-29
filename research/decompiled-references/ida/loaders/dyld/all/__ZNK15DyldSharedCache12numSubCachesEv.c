__int64 __fastcall DyldSharedCache::numSubCaches(DyldSharedCache *this)
{
  if ( *((_DWORD *)this + 4) >= 0x18Du )
    return *((unsigned int *)this + 99);
  else
    return 0;
}
