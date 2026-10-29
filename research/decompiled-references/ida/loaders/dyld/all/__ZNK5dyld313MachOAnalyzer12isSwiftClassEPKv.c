bool __fastcall dyld3::MachOAnalyzer::isSwiftClass(dyld3::MachOAnalyzer *this, _BYTE *a2)
{
  char v3; // w8

  if ( (unsigned int)dyld3::MachOFile::pointerSize(this) == 8 )
    v3 = a2[32];
  else
    v3 = a2[16];
  return (v3 & 3) != 0;
}
