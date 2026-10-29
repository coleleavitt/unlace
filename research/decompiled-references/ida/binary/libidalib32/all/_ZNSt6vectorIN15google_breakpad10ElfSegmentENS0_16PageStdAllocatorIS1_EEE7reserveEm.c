bool __fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 Tp_allocator; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::max_size(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::capacity(a1);
  if ( result )
  {
    v7 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::size(a1);
    v3 = std::__make_move_if_noexcept_iterator<google_breakpad::ElfSegment,std::move_iterator<google_breakpad::ElfSegment*>>(a1[4]);
    v4 = std::__make_move_if_noexcept_iterator<google_breakpad::ElfSegment,std::move_iterator<google_breakpad::ElfSegment*>>(a1[3]);
    v6 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_allocate_and_copy<std::move_iterator<google_breakpad::ElfSegment*>>(
           a1,
           a2,
           v4,
           v3);
    Tp_allocator = std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_get_Tp_allocator(a1);
    std::_Destroy<google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
      a1[3],
      a1[4],
      Tp_allocator);
    std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_M_deallocate(
      a1,
      a1[3],
      (__int64)(a1[5] - a1[3]) >> 4);
    a1[3] = v6;
    a1[4] = v6 + 16 * v7;
    a1[5] = a1[3] + 16 * a2;
    return (char)a1;
  }
  return result;
}

