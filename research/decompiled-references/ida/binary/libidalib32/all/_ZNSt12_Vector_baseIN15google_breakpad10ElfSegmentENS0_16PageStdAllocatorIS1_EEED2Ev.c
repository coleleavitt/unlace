// Alternative name is '_ZNSt12_Vector_baseIN15google_breakpad10ElfSegmentENS0_16PageStdAllocatorIS1_EEED1Ev'
__int64 __fastcall std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::~_Vector_base(
        __int64 a1)
{
  return std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 4);
}

