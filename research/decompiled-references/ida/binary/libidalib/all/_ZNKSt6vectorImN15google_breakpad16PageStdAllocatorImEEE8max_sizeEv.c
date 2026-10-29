__int64 __fastcall std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::max_size(Tp_allocator);
}

