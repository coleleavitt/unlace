__int64 __fastcall dyld3::MachOAnalyzer::chainedPointerFormat(dyld3::MachOAnalyzer *this)
{
  dyld3::MachOFile *v2; // x0
  const dyld_chained_fixups_header *v3; // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = (dyld3::MachOFile *)dyld3::MachOAnalyzer::chainedFixupsHeader(this);
  if ( v2 )
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::MachOFile::chainedPointerFormat(v2, v3);
  }
  else
  {
    if ( *((_DWORD *)this + 1) != 16777228 || (unsigned int)dyld3::MachOFile::maskedCpuSubtype(this) != 2 )
      dyld3::MachOAnalyzer::chainedPointerFormat();
    return 1;
  }
}
