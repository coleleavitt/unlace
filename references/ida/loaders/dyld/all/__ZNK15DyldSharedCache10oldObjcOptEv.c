__int64 __fastcall DyldSharedCache::oldObjcOpt(DyldSharedCache *this)
{
  bool v2; // zf
  __int64 v3; // x19
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  dyld3::MachOLoaded *v6; // x19
  _DWORD *v7; // x8
  __int64 v9; // [xsp+38h] [xbp-38h] BYREF
  __int64 *v10; // [xsp+40h] [xbp-30h]
  __int64 v11; // [xsp+48h] [xbp-28h]
  __int64 v12; // [xsp+50h] [xbp-20h]
  unsigned int v13; // [xsp+5Ch] [xbp-14h] BYREF

  v13 = 0;
  if ( (unsigned int)DyldSharedCache::hasImagePath(this, "/usr/lib/libobjc.A.dylib", &v13) )
    v2 = this == nullptr;
  else
    v2 = 1;
  if ( v2 )
    return 0;
  v4 = *((unsigned int *)this + 4);
  v5 = 24;
  if ( v4 > 0x1C3 )
    v5 = 448;
  v6 = (DyldSharedCache *)((char *)this
                         + *(_QWORD *)((char *)this + 32 * v13 + *(unsigned int *)((char *)this + v5))
                         - *(_QWORD *)((char *)this + v4));
  v9 = 0;
  v10 = &v9;
  v11 = 0x2000000000LL;
  v12 = 0;
  dyld3::MachOLoaded::getSlide(v6);
  dyld3::MachOFile::forEachSection((int)v6);
  v7 = (_DWORD *)v10[3];
  if ( v7 )
  {
    if ( (unsigned int)(*v7 - 15) >= 2 )
      v3 = 0;
    else
      v3 = v10[3];
  }
  else
  {
    v3 = 0;
  }
  _Block_object_dispose(&v9, 8);
  return v3;
}
