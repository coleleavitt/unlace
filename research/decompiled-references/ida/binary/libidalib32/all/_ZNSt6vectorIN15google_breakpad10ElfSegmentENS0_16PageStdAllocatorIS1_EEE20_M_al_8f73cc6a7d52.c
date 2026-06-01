__int64 __fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_allocate_and_copy<std::move_iterator<google_breakpad::ElfSegment*>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 Tp_allocator; // rcx
  __int64 v8; // [rsp+28h] [rbp-18h]

  v8 = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_allocate(
         a1,
         a2);
  Tp_allocator = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(a1);
  std::__uninitialized_copy_a<std::move_iterator<google_breakpad::ElfSegment *>,google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
    a3,
    a4,
    v8,
    Tp_allocator);
  return v8;
}

