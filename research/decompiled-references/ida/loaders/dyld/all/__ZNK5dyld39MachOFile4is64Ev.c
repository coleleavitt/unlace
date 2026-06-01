bool __fastcall dyld3::MachOFile::is64(dyld3::MachOFile *this)
{
  return *(_DWORD *)this == -17958193;
}
