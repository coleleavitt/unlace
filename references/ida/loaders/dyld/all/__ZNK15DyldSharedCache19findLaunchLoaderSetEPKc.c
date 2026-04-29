char *__fastcall DyldSharedCache::findLaunchLoaderSet(DyldSharedCache *this, const char *a2)
{
  __int64 v2; // x8
  __int64 v4; // x9
  char *v6; // x23
  Diagnostics *v7; // x22
  unsigned __int8 *v8; // x21
  __int64 v9; // x24
  const char *v10; // x4
  const unsigned __int8 *v11; // x3
  unsigned __int64 v12; // x8
  char *v13; // x19
  const unsigned __int8 **v15; // [xsp+0h] [xbp-40h] BYREF
  vm_address_t v16; // [xsp+8h] [xbp-38h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 0x168 )
    return nullptr;
  v4 = *((_QWORD *)this + 44);
  if ( !v4 )
    return nullptr;
  v6 = (char *)this - *(_QWORD *)((char *)this + v2);
  v7 = (Diagnostics *)&v6[v4];
  v8 = (unsigned __int8 *)&v6[v4 + *((unsigned int *)this + 90)];
  v9 = *((_QWORD *)this + 42);
  Diagnostics::Diagnostics((Diagnostics *)&v16);
  v15 = (const unsigned __int8 **)dyld3::MachOFile::trieWalk(
                                    (dyld3::MachOFile *)&v16,
                                    v7,
                                    v8,
                                    (const unsigned __int8 *)a2,
                                    v10);
  if ( v15
    && (v12 = (unsigned int)dyld3::MachOFile::read_uleb128(
                              (dyld3::MachOFile *)&v16,
                              &v15,
                              (const unsigned __int8 **)v8,
                              v11),
        v12 < *((_QWORD *)this + 43)) )
  {
    v13 = &v6[v9 + v12];
  }
  else
  {
    v13 = nullptr;
  }
  Diagnostics::~Diagnostics(&v16);
  return v13;
}
