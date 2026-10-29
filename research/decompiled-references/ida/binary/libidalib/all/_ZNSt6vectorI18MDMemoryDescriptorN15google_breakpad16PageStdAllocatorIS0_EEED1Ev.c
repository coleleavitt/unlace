// Alternative name is '_ZNSt6vectorI18MDMemoryDescriptorN15google_breakpad16PageStdAllocatorIS0_EEED2Ev'
__int64 __fastcall std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::~vector(
        __int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_get_Tp_allocator(a1);
  std::_Destroy<MDMemoryDescriptor *,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>(
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    Tp_allocator);
  return std::_Vector_base<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::~_Vector_base(a1);
}

