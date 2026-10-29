// Alternative name is '_ZN15google_breakpad15wasteful_vectorIPNS_11MappingInfoEEC2EPNS_13PageAllocatorEj'
__int64 __fastcall google_breakpad::wasteful_vector<google_breakpad::MappingInfo *>::wasteful_vector(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  _BYTE v5[48]; // [rsp+20h] [rbp-30h] BYREF

  google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>::PageStdAllocator(v5, a2);
  std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::vector(
    a1,
    v5);
  return std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::reserve(
           a1,
           a3);
}

