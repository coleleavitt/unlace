bool __fastcall dyld4::JustInTimeLoader::matchesPath(dyld4::JustInTimeLoader *this, const char *__s1)
{
  __int64 v4; // x21
  const char *v5; // x1
  const char *v6; // x0
  _BOOL8 result; // x0

  v4 = *((_QWORD *)this + 2);
  if ( (_WORD)v4 )
    v5 = (char *)this + (unsigned __int16)*((_QWORD *)this + 2);
  else
    v5 = nullptr;
  result = true;
  if ( _platform_strcmp(__s1, v5) )
  {
    if ( (v4 & 0x100000) == 0 )
      return false;
    v6 = (const char *)dyld3::MachOFile::installName(*((dyld3::MachOFile **)this + 1));
    if ( _platform_strcmp(__s1, v6) )
      return false;
  }
  return result;
}
