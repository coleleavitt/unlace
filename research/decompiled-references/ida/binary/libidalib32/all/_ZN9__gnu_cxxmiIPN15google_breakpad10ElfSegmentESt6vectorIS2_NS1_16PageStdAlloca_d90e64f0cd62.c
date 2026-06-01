__int64 __fastcall __gnu_cxx::operator-<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::base(a1);
  return (v2
        - *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::base(a2)) >> 4;
}

