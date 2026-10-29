bool __fastcall std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 Tp_allocator; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::max_size(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::capacity(a1);
  if ( result )
  {
    v7 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::size(a1);
    v3 = std::__make_move_if_noexcept_iterator<MDMemoryDescriptor,std::move_iterator<MDMemoryDescriptor*>>(a1[4]);
    v4 = std::__make_move_if_noexcept_iterator<MDMemoryDescriptor,std::move_iterator<MDMemoryDescriptor*>>(a1[3]);
    v6 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_allocate_and_copy<std::move_iterator<MDMemoryDescriptor*>>(
           a1,
           a2,
           v4,
           v3);
    Tp_allocator = std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_get_Tp_allocator(a1);
    std::_Destroy<MDMemoryDescriptor *,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>(
      a1[3],
      a1[4],
      Tp_allocator);
    std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_deallocate(
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

