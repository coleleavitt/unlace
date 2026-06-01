__int64 __fastcall dyld3::MachOFile::usesWeakDefs(dyld3::MachOFile *this)
{
  return *((_BYTE *)this + 26) & 1;
}
