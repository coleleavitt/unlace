__int64 __fastcall dyld3::MachOFile::hasThreadLocalVariables(dyld3::MachOFile *this)
{
  return *((unsigned __int8 *)this + 26) >> 7;
}
