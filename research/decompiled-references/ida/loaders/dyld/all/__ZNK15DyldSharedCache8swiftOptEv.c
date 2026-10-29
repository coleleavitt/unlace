__int64 __fastcall DyldSharedCache::swiftOpt(DyldSharedCache *this)
{
  __int64 v2; // x8

  if ( *((_DWORD *)this + 4) < 0x181u )
    return 0;
  v2 = *((_QWORD *)this + 47);
  if ( v2 )
    return (__int64)this + v2;
  else
    return 0;
}
