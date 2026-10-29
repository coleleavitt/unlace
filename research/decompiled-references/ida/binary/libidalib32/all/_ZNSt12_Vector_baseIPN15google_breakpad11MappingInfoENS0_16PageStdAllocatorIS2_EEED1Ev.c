// Alternative name is '_ZNSt12_Vector_baseIPN15google_breakpad11MappingInfoENS0_16PageStdAllocatorIS2_EEED2Ev'
__int64 __fastcall std::_Vector_base<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::~_Vector_base(
        __int64 a1)
{
  return std::_Vector_base<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3);
}

