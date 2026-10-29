bool __fastcall dyld3::MachOFile::hasMachOMagic(dyld3::MachOFile *this)
{
  return *(_DWORD *)this >> 1 == 2138504551;
}
