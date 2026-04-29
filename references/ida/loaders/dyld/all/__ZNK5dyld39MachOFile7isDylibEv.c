bool __fastcall dyld3::MachOFile::isDylib(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 6;
}
