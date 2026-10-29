// Alternative name is '_ZN15google_breakpad15wasteful_vectorI18MDMemoryDescriptorEC1EPNS_13PageAllocatorEj'
__int64 __fastcall google_breakpad::wasteful_vector<MDMemoryDescriptor>::wasteful_vector(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  _BYTE v5[48]; // [rsp+20h] [rbp-30h] BYREF

  google_breakpad::PageStdAllocator<MDMemoryDescriptor>::PageStdAllocator(v5, a2);
  std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::vector(a1, v5);
  return std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::reserve(a1, a3);
}

