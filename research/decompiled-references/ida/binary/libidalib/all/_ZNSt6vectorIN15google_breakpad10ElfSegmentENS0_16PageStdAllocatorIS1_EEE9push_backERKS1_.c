__int64 __fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::push_back(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::end(a1);
    return std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_realloc_insert<google_breakpad::ElfSegment const&>(
             a1,
             v3,
             a2);
  }
  else
  {
    std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::construct<google_breakpad::ElfSegment,google_breakpad::ElfSegment const&>(
      a1,
      *(_QWORD *)(a1 + 32),
      a2);
    *(_QWORD *)(a1 + 32) += 16LL;
    return a1;
  }
}

