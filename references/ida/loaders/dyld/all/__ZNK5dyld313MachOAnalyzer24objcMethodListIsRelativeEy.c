__int64 __fastcall dyld3::MachOAnalyzer::objcMethodListIsRelative(dyld3::MachOAnalyzer *this, __int64 a2)
{
  if ( a2 )
    return *(_DWORD *)((char *)this + a2) >> 31;
  else
    return 0;
}
