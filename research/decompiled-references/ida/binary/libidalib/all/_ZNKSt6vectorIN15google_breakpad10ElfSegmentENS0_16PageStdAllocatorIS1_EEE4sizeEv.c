__int64 __fastcall std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::size(
        __int64 a1)
{
  return (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 4;
}

