const char *__fastcall dyld3::MachOFile::archName(dyld3::MachOFile *this)
{
  __int64 v1; // x8
  int v2; // w9
  int v3; // w10
  const char *result; // x0

  v1 = 0;
  v2 = *((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 2) & 0xFFFFFF;
  result = "unknown";
  while ( LODWORD((&dyld3::MachOFile::_s_archInfos)[v1 + 1]) != v2
       || v3 != *((_DWORD *)&dyld3::MachOFile::_s_archInfos + 2 * v1 + 3) )
  {
    v1 += 2;
    if ( v1 == 26 )
      return result;
  }
  return (&dyld3::MachOFile::_s_archInfos)[v1];
}
