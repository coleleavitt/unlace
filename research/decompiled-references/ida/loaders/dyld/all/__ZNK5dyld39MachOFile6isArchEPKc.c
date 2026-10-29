bool __fastcall dyld3::MachOFile::isArch(dyld3::MachOFile *this, const char *__s1)
{
  __int64 v3; // x9
  const char *v4; // x1

  v3 = 0;
  v4 = "unknown";
  while ( LODWORD((&dyld3::MachOFile::_s_archInfos)[v3 + 1]) != *((_DWORD *)this + 1)
       || (*((_DWORD *)this + 2) & 0xFFFFFF) != *((_DWORD *)&dyld3::MachOFile::_s_archInfos + 2 * v3 + 3) )
  {
    v3 += 2;
    if ( v3 == 26 )
      return _platform_strcmp(__s1, v4) == 0;
  }
  v4 = (&dyld3::MachOFile::_s_archInfos)[v3];
  return _platform_strcmp(__s1, v4) == 0;
}
