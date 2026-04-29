__int64 __fastcall dyld3::MachOFile::hasChainedFixups(dyld3::MachOFile *this)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( *((_DWORD *)this + 1) == 16777228
    && (*((_DWORD *)this + 2) & 0xFFFFFF) == 2
    && (dyld3::MachOFile::hasLoadCommand(this, 0x80000022) & 1) != 0 )
  {
    return 1;
  }
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld3::MachOFile::hasLoadCommand(this, 0x80000034);
}
