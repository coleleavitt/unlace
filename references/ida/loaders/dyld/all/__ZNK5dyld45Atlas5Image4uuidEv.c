__int64 __fastcall dyld4::Atlas::Image::uuid(dyld4::Atlas::Image *this)
{
  unsigned int *v2; // x0
  dyld3::MachOFile *v3; // x20
  unsigned __int8 v5[16]; // [xsp+8h] [xbp-28h] BYREF

  if ( !*((_BYTE *)this + 184) )
  {
    memset(v5, 0, sizeof(v5));
    v2 = dyld4::Atlas::Image::ml(this);
    if ( v2 )
    {
      v3 = (dyld3::MachOFile *)v2;
      if ( dyld3::MachOFile::hasMachOMagic((dyld3::MachOFile *)v2) && dyld3::MachOFile::getUuid(v3, v5) )
        *((_OWORD *)this + 6) = *(_OWORD *)v5;
    }
    *((_BYTE *)this + 184) = 1;
  }
  return (__int64)this + 96;
}
