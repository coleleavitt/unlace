__int64 __fastcall DyldSharedCache::unslidLoadAddress(DyldSharedCache *this)
{
  return *(_QWORD *)((char *)this + *((unsigned int *)this + 4));
}
