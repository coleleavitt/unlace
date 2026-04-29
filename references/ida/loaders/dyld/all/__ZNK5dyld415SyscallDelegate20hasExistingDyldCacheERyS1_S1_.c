bool __fastcall dyld4::SyscallDelegate::hasExistingDyldCache(
        dyld4::SyscallDelegate *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v7; // w20
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x8

  v7 = __shared_region_check_np(a2);
  if ( !v7 )
  {
    v8 = *(_QWORD *)(*a2 + 496) + *a2;
    if ( _platform_strncmp((const char *)v8, "dyld_data    v0", 0x10u) )
    {
      v9 = 0;
      *a3 = 0;
    }
    else
    {
      *a3 = *(_QWORD *)(v8 + 16);
      v9 = *(_QWORD *)(v8 + 24);
    }
    *a4 = v9;
  }
  return v7 == 0;
}
