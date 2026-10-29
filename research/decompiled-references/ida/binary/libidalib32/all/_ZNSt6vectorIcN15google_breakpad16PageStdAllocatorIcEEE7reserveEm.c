bool __fastcall std::vector<char,google_breakpad::PageStdAllocator<char>>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 Tp_allocator; // rax
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]

  if ( a2 > std::vector<char,google_breakpad::PageStdAllocator<char>>::max_size(a1) )
    std::__throw_length_error("vector::reserve");
  result = a2 > std::vector<char,google_breakpad::PageStdAllocator<char>>::capacity(a1);
  if ( result )
  {
    v7 = std::vector<char,google_breakpad::PageStdAllocator<char>>::size(a1);
    v3 = std::__make_move_if_noexcept_iterator<char,std::move_iterator<char *>>(a1[4]);
    v4 = std::__make_move_if_noexcept_iterator<char,std::move_iterator<char *>>(a1[3]);
    v6 = std::vector<char,google_breakpad::PageStdAllocator<char>>::_M_allocate_and_copy<std::move_iterator<char *>>(
           a1,
           a2,
           v4,
           v3);
    Tp_allocator = std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::_M_get_Tp_allocator(a1);
    std::_Destroy<char *,google_breakpad::PageStdAllocator<char>>(a1[3], a1[4], Tp_allocator);
    std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::_M_deallocate(a1, a1[3], a1[5] - a1[3]);
    a1[3] = v6;
    a1[4] = v7 + v6;
    a1[5] = a2 + a1[3];
    return (char)a1;
  }
  return result;
}

