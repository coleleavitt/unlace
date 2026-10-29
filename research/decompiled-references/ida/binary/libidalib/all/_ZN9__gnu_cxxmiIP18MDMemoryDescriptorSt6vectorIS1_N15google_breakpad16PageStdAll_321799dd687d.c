__int64 __fastcall __gnu_cxx::operator-<MDMemoryDescriptor *,std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<MDMemoryDescriptor *,std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>>::base(a1);
  return (v2
        - *(_QWORD *)__gnu_cxx::__normal_iterator<MDMemoryDescriptor *,std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>>::base(a2)) >> 4;
}

