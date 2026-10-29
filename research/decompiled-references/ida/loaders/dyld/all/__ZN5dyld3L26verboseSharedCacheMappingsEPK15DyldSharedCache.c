__int64 __fastcall dyld3::verboseSharedCacheMappings(dyld3 *this, const DyldSharedCache *a2)
{
  _QWORD v4[5]; // [xsp+8h] [xbp-38h] BYREF

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 0x40000000;
  v4[2] = ___ZN5dyld3L26verboseSharedCacheMappingsEPK15DyldSharedCache_block_invoke;
  v4[3] = &__block_descriptor_tmp_32_2;
  v4[4] = DyldSharedCache::slide(this);
  return DyldSharedCache::forEachRange(this, v4, 0);
}
