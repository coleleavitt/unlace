__int64 __fastcall std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::max_size(Tp_allocator);
}

