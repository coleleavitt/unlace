__int64 __fastcall dyld3::MachOFile::pointerSize(dyld3::MachOFile *this)
{
  if ( *(_DWORD *)this == -17958193 )
    return 8;
  else
    return 4;
}
