__int64 __fastcall std::vector<char,google_breakpad::PageStdAllocator<char>>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<google_breakpad::PageStdAllocator<char>>::max_size(Tp_allocator);
}

