__int64 __fastcall dyld3::MachOFile::inDyldCache(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 6) >> 31;
}
