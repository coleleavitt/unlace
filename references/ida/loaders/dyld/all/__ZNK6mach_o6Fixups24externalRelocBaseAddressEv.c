__int64 __fastcall mach_o::Fixups::externalRelocBaseAddress(dyld3::MachOFile ***this)
{
  int v2; // w8
  dyld3::MachOFile *v3; // x0
  dyld3::MachOFile *v5; // x9
  dyld3::MachOFile *v6; // x8
  __int64 v7; // x9
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = dyld3::MachOFile::inDyldCache(**this);
  v3 = **this;
  if ( v2 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::MachOFile::preferredLoadAddress(v3);
  }
  else if ( (dyld3::MachOFile::isArch(v3, "x86_64") || dyld3::MachOFile::isArch(**this, "x86_64h"))
         && (v5 = (*this)[2]) != nullptr )
  {
    v6 = (*this)[1];
    v7 = 48LL * (_QWORD)v5;
    while ( (*((_BYTE *)v6 + 40) & 2) == 0 )
    {
      v6 = (dyld3::MachOFile *)((char *)v6 + 48);
      v7 -= 48;
      if ( !v7 )
        return 0;
    }
    return *(_QWORD *)v6;
  }
  else
  {
    return 0;
  }
}
