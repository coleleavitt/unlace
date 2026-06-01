__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::allocate(
        __int64 a1,
        __int64 a2)
{
  return google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>::allocate(a1, a2, 0);
}

