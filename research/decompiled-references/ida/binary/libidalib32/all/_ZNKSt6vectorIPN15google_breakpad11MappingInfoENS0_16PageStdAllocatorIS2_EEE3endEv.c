__int64 __fastcall std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::end(
        __int64 a1)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  __gnu_cxx::__normal_iterator<google_breakpad::MappingInfo * const*,std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>>::__normal_iterator(
    &v2,
    &v3);
  return v2;
}

