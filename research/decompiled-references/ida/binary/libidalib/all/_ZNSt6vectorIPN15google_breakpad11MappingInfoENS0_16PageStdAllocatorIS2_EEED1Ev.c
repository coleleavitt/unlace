// Alternative name is '_ZNSt6vectorIPN15google_breakpad11MappingInfoENS0_16PageStdAllocatorIS2_EEED2Ev'
__int64 __fastcall std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::~vector(
        __int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::_M_get_Tp_allocator(a1);
  std::_Destroy<google_breakpad::MappingInfo **,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>(
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    Tp_allocator);
  return std::_Vector_base<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::~_Vector_base(a1);
}

