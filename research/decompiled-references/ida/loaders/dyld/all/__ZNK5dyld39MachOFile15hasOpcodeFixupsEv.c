__int64 __fastcall dyld3::MachOFile::hasOpcodeFixups(dyld3::MachOFile *this)
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( (dyld3::MachOFile::hasLoadCommand(this, -2147483614) & 1) != 0 )
    return 1;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld3::MachOFile::hasLoadCommand(this, 34);
}
