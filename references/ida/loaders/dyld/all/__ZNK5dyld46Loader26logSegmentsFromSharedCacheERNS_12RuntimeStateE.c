void __fastcall dyld4::Loader::logSegmentsFromSharedCache(dyld4::Loader *this, dyld4::RuntimeState *a2)
{
  const char *v4; // x0
  __int64 v5; // x21
  _DWORD *Address; // x0
  _QWORD v7[6]; // [xsp+10h] [xbp-50h] BYREF

  v4 = (const char *)dyld4::Loader::path(this);
  dyld4::RuntimeState::log(a2, "Using mapping in dyld cache for %s\n", v4);
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 208LL);
  Address = (_DWORD *)dyld4::Loader::loadAddress(this, a2);
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 0x40000000;
  v7[2] = ___ZNK5dyld46Loader26logSegmentsFromSharedCacheERNS_12RuntimeStateE_block_invoke;
  v7[3] = &__block_descriptor_tmp_101;
  v7[4] = a2;
  v7[5] = v5;
  dyld3::MachOFile::forEachSegment(Address, (__int64)v7);
}
