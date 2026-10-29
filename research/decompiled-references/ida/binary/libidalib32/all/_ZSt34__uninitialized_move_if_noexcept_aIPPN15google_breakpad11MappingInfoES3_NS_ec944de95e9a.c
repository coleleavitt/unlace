__int64 __fastcall std::__uninitialized_move_if_noexcept_a<google_breakpad::MappingInfo **,google_breakpad::MappingInfo **,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = std::__make_move_if_noexcept_iterator<google_breakpad::MappingInfo *,std::move_iterator<google_breakpad::MappingInfo **>>(a2);
  v5 = std::__make_move_if_noexcept_iterator<google_breakpad::MappingInfo *,std::move_iterator<google_breakpad::MappingInfo **>>(a1);
  return std::__uninitialized_copy_a<std::move_iterator<google_breakpad::MappingInfo **>,google_breakpad::MappingInfo **,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>(
           v5,
           v4,
           a3,
           a4);
}

