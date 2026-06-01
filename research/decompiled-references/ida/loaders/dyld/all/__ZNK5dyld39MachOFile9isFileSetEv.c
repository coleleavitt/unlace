bool __fastcall dyld3::MachOFile::isFileSet(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 12;
}
