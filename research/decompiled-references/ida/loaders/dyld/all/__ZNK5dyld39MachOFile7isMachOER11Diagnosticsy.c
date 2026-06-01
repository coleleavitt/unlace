bool __fastcall dyld3::MachOFile::isMachO(dyld3::MachOFile *this, Diagnostics *a2, unsigned __int64 a3)
{
  int v4; // w8
  bool v5; // zf
  __int64 v6; // x8
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a3 <= 0x1B )
  {
    Diagnostics::error(a2, "MachO header exceeds file length");
    return 0;
  }
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)this >> 1 != 2138504551 )
  {
    if ( (v4 & 0xFEFFFFFF) != 0xCEFAEDFE )
      Diagnostics::error(a2, "file does not start with MH_MAGIC[_64]");
    return 0;
  }
  v5 = v4 == -17958193;
  v6 = 28;
  if ( v5 )
    v6 = 32;
  if ( v6 + (unsigned __int64)*((unsigned int *)this + 5) > a3 )
  {
    Diagnostics::error(a2, "load commands exceed length of first segment");
    return 0;
  }
  dyld3::MachOFile::forEachLoadCommand(this, a2, (__int64)&__block_literal_global_1);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return Diagnostics::noError(a2);
}
