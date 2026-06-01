__int64 __fastcall dyld4::APIs::_dyld_images_for_addresses(
        __int64 this,
        unsigned int a2,
        DyldSharedCache **a3,
        _QWORD *a4)
{
  _QWORD *v4; // x19
  DyldSharedCache **v5; // x20
  dyld4::APIs *v7; // x21
  dyld3::MachOFile *v8; // x22
  char *v9; // x25
  __int64 i; // x24
  DyldSharedCache *v11; // x23
  unsigned __int64 v13; // [xsp+18h] [xbp-68h] BYREF
  void *v14; // [xsp+20h] [xbp-60h] BYREF
  char *v15; // [xsp+28h] [xbp-58h] BYREF
  bool v16; // [xsp+37h] [xbp-49h] BYREF
  dyld3::MachOLoaded *v17; // [xsp+38h] [xbp-48h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = (dyld4::APIs *)this;
  if ( *(_BYTE *)(*(_QWORD *)(this + 8) + 184LL) )
    this = dyld4::RuntimeState::log((dyld4::RuntimeState *)this, "_dyld_images_for_addresses(%d, %p, %p)\n", a2, a3, a4);
  v17 = nullptr;
  v16 = 0;
  v14 = nullptr;
  v15 = nullptr;
  v13 = 0;
  if ( a2 )
  {
    v8 = nullptr;
    v9 = nullptr;
    for ( i = a2 - 1LL; ; --i )
    {
      v11 = *v5;
      __bzero(v4, 0x20u);
      if ( v8 )
      {
        if ( v11 >= v8 && v9 >= (char *)v11 )
          goto LABEL_12;
      }
      this = dyld4::APIs::findImageMappedAt(v7, v11, &v17, &v16, (const char **)&v15, &v14, &v13, nullptr);
      if ( (this & 1) != 0 )
        break;
      v17 = nullptr;
      if ( !i )
        return this;
LABEL_16:
      v8 = v17;
      ++v5;
      v4 += 4;
    }
    v8 = v17;
    v9 = (char *)v17 + v13;
    if ( v17 )
    {
LABEL_12:
      v4[2] = v11 - v8;
      v4[3] = v8;
      this = dyld3::MachOFile::getUuid(v8, (unsigned __int8 *)v4);
    }
    if ( !i )
      return this;
    goto LABEL_16;
  }
  return this;
}
