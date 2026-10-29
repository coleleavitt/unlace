__int64 __fastcall DyldSharedCache::slide(DyldSharedCache *this)
{
  return (__int64)this - *(_QWORD *)((char *)this + *((unsigned int *)this + 4));
}
