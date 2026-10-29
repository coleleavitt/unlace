// Alternative name is '_ZN15google_breakpad15wasteful_vectorINS_10ElfSegmentEEC2ENS_16PageStdAllocatorIS1_EE'
__int64 __fastcall google_breakpad::wasteful_vector<google_breakpad::ElfSegment>::wasteful_vector(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  return std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::vector(
           a1,
           &a7);
}

