__int64 __fastcall dyld3::MachOAnalyzer::forEachBindTarget(
        dyld3::MachOFile *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // x0
  __int64 _38; // [xsp+38h] [xbp+8h]

  result = dyld3::MachOFile::isPreload(a1);
  if ( (result & 1) == 0 )
  {
    if ( (unsigned int)dyld3::MachOFile::hasChainedFixups(a1) )
    {
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return dyld3::MachOAnalyzer::forEachBindTarget_ChainedFixups(a1, a2, a4);
    }
    else if ( (unsigned int)dyld3::MachOFile::hasOpcodeFixups(a1) )
    {
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return dyld3::MachOAnalyzer::forEachBindTarget_Opcodes(a1, a2, a3, a4, a5);
    }
    else
    {
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return dyld3::MachOAnalyzer::forEachBindTarget_Relocations(a1, a2, a4);
    }
  }
  return result;
}
