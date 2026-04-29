__int64 __fastcall DyldSharedCache::patchInfoVersion(DyldSharedCache *this)
{
  __int64 v1; // x8

  v1 = *((unsigned int *)this + 4);
  if ( (unsigned int)v1 >= 0x181 )
    return *(unsigned int *)((char *)this + *((_QWORD *)this + 19) - *(_QWORD *)((char *)this + v1));
  else
    return 1;
}
