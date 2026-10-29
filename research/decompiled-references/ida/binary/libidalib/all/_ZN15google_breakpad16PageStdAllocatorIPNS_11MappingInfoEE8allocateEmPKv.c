__int64 __fastcall google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>::allocate(__int64 a1, __int64 a2)
{
  if ( (unsigned __int64)(8 * a2) > *(_QWORD *)(a1 + 16) )
    return google_breakpad::PageAllocator::Alloc(*(google_breakpad::PageAllocator **)a1, 8 * a2);
  else
    return *(_QWORD *)(a1 + 8);
}

