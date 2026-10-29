__int64 __fastcall std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::max_size(
        __int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::max_size(Tp_allocator);
}

