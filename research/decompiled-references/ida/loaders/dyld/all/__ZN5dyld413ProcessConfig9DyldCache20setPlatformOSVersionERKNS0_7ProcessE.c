void __fastcall dyld4::ProcessConfig::DyldCache::setPlatformOSVersion(
        DyldSharedCache **this,
        const dyld4::ProcessConfig::Process *a2)
{
  DyldSharedCache *v3; // x0
  int v4; // w8
  int v5; // w9
  const char *v7; // x1
  _DWORD *ImageFromPath; // x0
  const char *v9; // x1
  _QWORD v10[6]; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = *this;
  v4 = *((_DWORD *)a2 + 15);
  if ( *((_DWORD *)v3 + 4) < 0x170u )
  {
    if ( v4 == 10 )
      v7 = "/System/DriverKit/usr/lib/system/libdyld.dylib";
    else
      v7 = "/usr/lib/system/libdyld.dylib";
    ImageFromPath = (_DWORD *)DyldSharedCache::getImageFromPath(v3, v7);
    if ( ImageFromPath )
    {
      v10[0] = _NSConcreteStackBlock;
      v10[1] = 0x40000000;
      v10[2] = ___ZN5dyld413ProcessConfig9DyldCache20setPlatformOSVersionERKNS0_7ProcessE_block_invoke;
      v10[3] = &__block_descriptor_tmp_52;
      v10[4] = this;
      v10[5] = a2;
      dyld3::MachOFile::forEachSupportedPlatform(ImageFromPath, (__int64)v10);
    }
    else
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      dyld4::console((dyld4 *)"initializeCachePlatformOSVersion(): libdyld.dylib not found for OS version info\n", v9);
    }
  }
  else if ( v4 == *((_DWORD *)v3 + 54) )
  {
    v5 = *((_DWORD *)v3 + 91);
    *((_DWORD *)this + 32) = v4;
    *((_DWORD *)this + 33) = v5;
  }
  else
  {
    *(this + 16) = *((DyldSharedCache **)v3 + 46);
  }
}
