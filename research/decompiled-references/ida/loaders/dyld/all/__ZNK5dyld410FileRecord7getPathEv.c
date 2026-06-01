__int64 __fastcall dyld4::FileRecord::getPath(dyld4::FileRecord *this)
{
  __int64 *v1; // x19
  fsid_t v2; // x1
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v1 = (__int64 *)((char *)this + 40);
  if ( !*((_QWORD *)this + 5) )
  {
    v2 = *((fsid_t *)this + 2);
    if ( v2 )
      dyld4::FileManager::getPath(*(dyld4::SyscallDelegate ***)this, v2, *((_QWORD *)this + 1), &v6);
    else
      dyld4::FileManager::getPath(
        *(dyld4::FileManager **)this,
        (const UUID *)((char *)this + 24),
        *((_QWORD *)this + 1),
        &v6);
    v3 = v6;
    v6 = 0;
    v7 = v3;
    if ( &v7 != v1 )
    {
      v4 = *v1;
      *v1 = v3;
      v7 = v4;
    }
    lsl::UniquePtr<char const>::~UniquePtr(&v7);
    lsl::UniquePtr<char>::~UniquePtr(&v6);
  }
  return *v1;
}
