bool __fastcall dyld3::MachOFile::isPreload(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 5;
}
