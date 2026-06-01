bool __fastcall __gnu_cxx::operator==<google_breakpad::MappingInfo * const*,std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::MappingInfo * const*,std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>>::base(a1);
  return v2 == *(_QWORD *)__gnu_cxx::__normal_iterator<google_breakpad::MappingInfo * const*,std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>>::base(a2);
}

