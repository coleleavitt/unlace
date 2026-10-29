__int64 __fastcall std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::push_back(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::end(a1);
    return std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::_M_realloc_insert<google_breakpad::MappingInfo * const&>(
             a1,
             v3,
             a2);
  }
  else
  {
    std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::construct<google_breakpad::MappingInfo *,google_breakpad::MappingInfo * const&>(
      a1,
      *(_QWORD *)(a1 + 32),
      a2);
    *(_QWORD *)(a1 + 32) += 8LL;
    return a1;
  }
}

