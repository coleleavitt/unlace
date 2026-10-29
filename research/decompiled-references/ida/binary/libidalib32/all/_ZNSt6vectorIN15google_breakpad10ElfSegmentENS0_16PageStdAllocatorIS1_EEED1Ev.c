// Alternative name is '_ZNSt6vectorIN15google_breakpad10ElfSegmentENS0_16PageStdAllocatorIS1_EEED2Ev'
__int64 __fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::~vector(
        __int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(a1);
  std::_Destroy<google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    Tp_allocator);
  return std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::~_Vector_base(a1);
}

