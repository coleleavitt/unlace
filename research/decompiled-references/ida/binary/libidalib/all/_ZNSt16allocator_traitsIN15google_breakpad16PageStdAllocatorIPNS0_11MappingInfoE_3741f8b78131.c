__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::construct<google_breakpad::MappingInfo *,google_breakpad::MappingInfo * const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<google_breakpad::MappingInfo * const&>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::_S_construct<google_breakpad::MappingInfo *,google_breakpad::MappingInfo * const&>(
           a1,
           a2,
           v3);
}

