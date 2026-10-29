const char *__fastcall dyld3::MachOFile::platformName(int a1)
{
  __int64 v2; // x9
  const char *result; // x0

  v2 = 0;
  result = "unknown";
  while ( LODWORD((&dyld3::MachOFile::_s_platformInfos)[v2 + 1]) != a1 )
  {
    v2 += 2;
    if ( v2 == 20 )
      return result;
  }
  return (&dyld3::MachOFile::_s_platformInfos)[v2];
}
