bool __fastcall dyld3::MachOFile::isMainExecutable(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 2;
}
