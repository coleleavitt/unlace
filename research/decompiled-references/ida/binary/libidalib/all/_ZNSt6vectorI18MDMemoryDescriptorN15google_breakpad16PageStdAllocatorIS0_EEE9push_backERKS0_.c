__int64 __fastcall std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::push_back(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::end(a1);
    return std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::_M_realloc_insert<MDMemoryDescriptor const&>(
             a1,
             v3,
             a2);
  }
  else
  {
    std::allocator_traits<google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::construct<MDMemoryDescriptor,MDMemoryDescriptor const&>(
      a1,
      *(_QWORD *)(a1 + 32),
      a2);
    *(_QWORD *)(a1 + 32) += 16LL;
    return a1;
  }
}

