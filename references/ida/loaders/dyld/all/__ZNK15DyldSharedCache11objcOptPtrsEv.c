__int64 __fastcall DyldSharedCache::objcOptPtrs(DyldSharedCache *this)
{
  unsigned __int64 v2; // x9
  __int64 v3; // x10
  dyld3::MachOLoaded *v4; // x19
  __int64 v5; // x19
  __int64 v7; // [xsp+38h] [xbp-48h] BYREF
  __int64 *v8; // [xsp+40h] [xbp-40h]
  __int64 v9; // [xsp+48h] [xbp-38h]
  __int64 v10; // [xsp+50h] [xbp-30h]
  unsigned int v11; // [xsp+5Ch] [xbp-24h] BYREF

  v11 = 0;
  if ( !(unsigned int)DyldSharedCache::hasImagePath(this, "/usr/lib/libobjc.A.dylib", &v11) )
    return 0;
  v2 = *((unsigned int *)this + 4);
  v3 = 24;
  if ( v2 > 0x1C3 )
    v3 = 448;
  v4 = (DyldSharedCache *)((char *)this
                         + *(_QWORD *)((char *)this + 32 * v11 + *(unsigned int *)((char *)this + v3))
                         - *(_QWORD *)((char *)this + v2));
  v7 = 0;
  v8 = &v7;
  v9 = 0x2000000000LL;
  v10 = 0;
  dyld3::MachOLoaded::getSlide(v4);
  dyld3::MachOFile::pointerSize(v4);
  dyld3::MachOFile::forEachSection((int)v4);
  v5 = v8[3];
  _Block_object_dispose(&v7, 8);
  return v5;
}
