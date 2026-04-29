bool __fastcall DyldSharedCache::findMachHeaderImageIndex(
        DyldSharedCache *this,
        const mach_header *a2,
        unsigned int *a3)
{
  __int64 v3; // x8
  __int64 v4; // x11
  __int64 v5; // x9
  unsigned __int64 v6; // x9
  signed __int64 v7; // x10
  __int64 v8; // x11
  unsigned __int64 v9; // x8
  _BOOL8 result; // x0
  __int64 *v11; // x11
  __int64 v12; // t1

  v3 = *((unsigned int *)this + 4);
  if ( (unsigned int)v3 <= 0x1C3 )
    v4 = 24;
  else
    v4 = 448;
  v5 = 28;
  if ( (unsigned int)v3 > 0x1C3 )
    v5 = 452;
  v6 = *(unsigned int *)((char *)this + v5);
  if ( !(_DWORD)v6 )
    return 0;
  v7 = (char *)a2 - (char *)this + *(_QWORD *)((char *)this + v3);
  v8 = *(unsigned int *)((char *)this + v4);
  if ( *(_QWORD *)((char *)this + v8) == v7 )
  {
    LODWORD(v9) = 0;
    result = 1;
LABEL_14:
    *a3 = v9;
  }
  else
  {
    v9 = 0;
    v11 = (__int64 *)((char *)this + v8 + 32);
    while ( v6 - 1 != v9 )
    {
      v12 = *v11;
      v11 += 4;
      ++v9;
      if ( v12 == v7 )
      {
        result = v9 < v6;
        goto LABEL_14;
      }
    }
    return v9 + 1 < v6;
  }
  return result;
}
