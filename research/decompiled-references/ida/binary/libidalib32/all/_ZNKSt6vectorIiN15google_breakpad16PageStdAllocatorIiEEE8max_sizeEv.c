__int64 __fastcall std::vector<int,google_breakpad::PageStdAllocator<int>>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<google_breakpad::PageStdAllocator<int>>::max_size(Tp_allocator);
}

