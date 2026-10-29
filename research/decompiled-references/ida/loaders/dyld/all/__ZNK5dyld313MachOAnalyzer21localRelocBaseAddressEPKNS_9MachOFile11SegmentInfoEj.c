__int64 __fastcall dyld3::MachOAnalyzer::localRelocBaseAddress(dyld3::MachOFile *a1, __int64 a2, int a3)
{
  __int64 v6; // x8
  _BYTE *v7; // x10

  if ( (dyld3::MachOFile::isArch(a1, "x86_64") || dyld3::MachOFile::isArch(a1, "x86_64h")) && a3 )
  {
    v6 = 0;
    v7 = (_BYTE *)(a2 + 52);
    while ( (*v7 & 2) == 0 )
    {
      ++v6;
      v7 += 64;
      if ( a3 == v6 )
        goto LABEL_7;
    }
    v6 = (unsigned int)v6;
  }
  else
  {
LABEL_7:
    v6 = dyld3::MachOFile::isMainExecutable(a1) && !*(_DWORD *)(a2 + 52);
  }
  return *(_QWORD *)(a2 + (v6 << 6) + 16);
}
