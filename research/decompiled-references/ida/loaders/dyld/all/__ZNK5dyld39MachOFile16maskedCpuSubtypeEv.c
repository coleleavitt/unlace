__int64 __fastcall dyld3::MachOFile::maskedCpuSubtype(dyld3::MachOFile *this)
{
  return *((_DWORD *)this + 2) & 0xFFFFFF;
}
