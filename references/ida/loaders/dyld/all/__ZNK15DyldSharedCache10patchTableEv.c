__int64 __fastcall DyldSharedCache::patchTable(DyldSharedCache *this)
{
  return (__int64)this + *((_QWORD *)this + 19) - *(_QWORD *)((char *)this + *((unsigned int *)this + 4));
}
