__int64 __fastcall dyld3::MachOAnalyzer::externalRelocBaseAddress(dyld3::MachOFile *a1, __int64 a2, int a3)
{
  __int64 result; // x0
  _BOOL4 isArch; // w8
  __int64 v8; // x8
  _BYTE *i; // x10
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)dyld3::MachOFile::inDyldCache(a1) )
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::MachOFile::preferredLoadAddress(a1);
  }
  else
  {
    if ( dyld3::MachOFile::isArch(a1, "x86_64") )
    {
      if ( !a3 )
        return 0;
    }
    else
    {
      isArch = dyld3::MachOFile::isArch(a1, "x86_64h");
      result = 0;
      if ( !isArch || !a3 )
        return result;
    }
    v8 = 0;
    for ( i = (_BYTE *)(a2 + 52); (*i & 2) == 0; i += 64 )
    {
      if ( a3 == ++v8 )
        return 0;
    }
    return *(_QWORD *)(a2 + ((unsigned __int64)(unsigned int)v8 << 6) + 16);
  }
}
