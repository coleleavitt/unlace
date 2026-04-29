__int64 __fastcall dyld3::kdebug_trace_dyld_cache(
        dyld3 *this,
        fsobj_id a2,
        fsid a3,
        const char *a4,
        const unsigned __int8 *a5)
{
  __int64 result; // x0
  fsobj_id v9; // [xsp+0h] [xbp-430h] BYREF
  char v10[1024]; // [xsp+8h] [xbp-428h] BYREF

  v9 = a2;
  result = kdebug_is_enabled(0x1F050028u);
  if ( (_DWORD)result )
  {
    result = dyld3::MachOFile::inDyldCache((dyld3::MachOFile *)&dword_0);
    if ( (result & 1) == 0 )
    {
      __bzero(v10, 0x400u);
      if ( fsgetpath(v10, 0x400u, (fsid_t *)&v9, (uint64_t)this) == -1 )
        v10[0] = 0;
      return dyld3::kdebug_trace_dyld_region(
               (dyld3 *)((char *)&dword_8 + 2),
               0,
               0,
               (__int64)v10,
               a4,
               (const unsigned __int8 (*)[16])this,
               v9,
               a3,
               *(const void **)&v9);
    }
  }
  return result;
}
