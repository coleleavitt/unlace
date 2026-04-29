__int64 __fastcall dyld3::MachOFile::hasWeakDefs(dyld3::MachOFile *this)
{
  return *((unsigned __int8 *)this + 25) >> 7;
}
