__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::construct<google_breakpad::ElfSegment,google_breakpad::ElfSegment>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<google_breakpad::ElfSegment>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_S_construct<google_breakpad::ElfSegment,google_breakpad::ElfSegment>(
           a1,
           a2,
           v3);
}

