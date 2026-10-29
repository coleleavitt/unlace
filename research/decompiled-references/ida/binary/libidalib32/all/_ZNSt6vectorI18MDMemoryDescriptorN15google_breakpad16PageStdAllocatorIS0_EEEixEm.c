__int64 __fastcall std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::operator[](
        __int64 a1,
        __int64 a2)
{
  return 16 * a2 + *(_QWORD *)(a1 + 24);
}

