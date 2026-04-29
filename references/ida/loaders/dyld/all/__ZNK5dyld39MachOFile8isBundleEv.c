bool __fastcall dyld3::MachOFile::isBundle(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 8;
}
