__int64 __fastcall DyldSharedCache::hasImagePath(DyldSharedCache *this, const char *__s2, unsigned int *a3)
{
  __int64 v3; // x9
  Diagnostics *v8; // x22
  unsigned __int8 *v9; // x21
  const char *v10; // x4
  const unsigned __int8 *v11; // x3
  __int64 v12; // x22
  __int64 v13; // x23
  unsigned int *i; // x24
  const unsigned __int8 **v15; // [xsp+0h] [xbp-40h] BYREF
  _BYTE v16[8]; // [xsp+8h] [xbp-38h] BYREF

  v3 = *((unsigned int *)this + 4);
  if ( *(_QWORD *)((char *)this + v3 + 16) )
    return 0;
  if ( (unsigned int)v3 < 0x118 )
  {
    v12 = *((unsigned int *)this + 7);
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      for ( i = (unsigned int *)((char *)this + *((unsigned int *)this + 6) + 24);
            _platform_strcmp((const char *)this + *i, __s2);
            i += 8 )
      {
        if ( v12 == ++v13 )
          return 0;
      }
      *a3 = v13;
      return 1;
    }
  }
  else
  {
    v8 = (DyldSharedCache *)((char *)this + *((_QWORD *)this + 33) - *(_QWORD *)((char *)this + v3));
    v9 = (unsigned __int8 *)v8 + *((_QWORD *)this + 34);
    Diagnostics::Diagnostics((Diagnostics *)v16);
    v15 = (const unsigned __int8 **)dyld3::MachOFile::trieWalk(
                                      (dyld3::MachOFile *)v16,
                                      v8,
                                      v9,
                                      (const unsigned __int8 *)__s2,
                                      v10);
    if ( v15 )
    {
      *a3 = dyld3::MachOFile::read_uleb128((dyld3::MachOFile *)v16, &v15, (const unsigned __int8 **)v9, v11);
      Diagnostics::~Diagnostics((Diagnostics *)v16);
      return 1;
    }
    Diagnostics::~Diagnostics((Diagnostics *)v16);
  }
  return 0;
}
