__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::construct<MDMemoryDescriptor,MDMemoryDescriptor const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<MDMemoryDescriptor const&>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_S_construct<MDMemoryDescriptor,MDMemoryDescriptor const&>(
           a1,
           a2,
           v3);
}

