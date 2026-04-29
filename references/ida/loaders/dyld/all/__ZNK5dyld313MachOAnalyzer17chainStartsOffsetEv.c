__int64 __fastcall dyld3::MachOAnalyzer::chainStartsOffset(dyld3::MachOAnalyzer *this)
{
  __int64 result; // x0

  result = dyld3::MachOAnalyzer::chainedFixupsHeader(this);
  if ( result )
    return result - (_QWORD)this + *(unsigned int *)(result + 4);
  return result;
}
