__int64 __fastcall std::__uninitialized_move_if_noexcept_a<google_breakpad::ElfSegment *,google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = std::__make_move_if_noexcept_iterator<google_breakpad::ElfSegment,std::move_iterator<google_breakpad::ElfSegment*>>(a2);
  v5 = std::__make_move_if_noexcept_iterator<google_breakpad::ElfSegment,std::move_iterator<google_breakpad::ElfSegment*>>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<google_breakpad::ElfSegment *>,google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
           v5,
           v4,
           a3,
           a4);
}

