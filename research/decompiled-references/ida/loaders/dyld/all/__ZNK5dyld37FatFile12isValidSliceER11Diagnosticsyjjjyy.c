bool __fastcall dyld3::FatFile::isValidSlice(
        dyld3::FatFile *this,
        Diagnostics *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  char *v12; // x21
  _BOOL8 result; // x0
  int v14; // w8
  __int64 v15; // x9

  if ( a3 < a7 || a3 - a7 < a8 )
  {
    Diagnostics::error(a2, "slice %d extends beyond end of file");
    return 0;
  }
  v12 = (char *)this + a7;
  result = dyld3::MachOFile::isMachO((dyld3::FatFile *)((char *)this + a7), a2, a8);
  if ( !result )
    return result;
  if ( *((_DWORD *)v12 + 1) != a5 )
  {
    Diagnostics::error(a2, "cpu type in slice (0x%08X) does not match fat header (0x%08X)");
    return 0;
  }
  v14 = *((_DWORD *)v12 + 2);
  if ( ((v14 ^ a6) & 0xFFFFFF) == 0 )
  {
    if ( a5 != 33554444 && a5 != 16777228 )
    {
      if ( a5 != 12 )
      {
        v15 = 4095;
        goto LABEL_18;
      }
      v15 = 4095;
      if ( *((_DWORD *)v12 + 3) == 11 || v14 != 12 )
        goto LABEL_18;
    }
    v15 = 0x3FFF;
LABEL_18:
    if ( (v15 & a7) == 0 )
      return 1;
    if ( _platform_strncmp(v12, "!<arch>", 7u) )
      Diagnostics::error(a2, "slice is not page aligned");
    else
      Diagnostics::error(a2, "file is static library");
    return 0;
  }
  Diagnostics::error(a2, "cpu subtype in slice (0x%08X) does not match fat header (0x%08X)");
  return 0;
}
