bool __fastcall dyld3::MachOFile::isKextBundle(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 3) == 11;
}
