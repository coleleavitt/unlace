__int64 __fastcall google_breakpad::PageStdAllocator<char>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(a1 + 16) )
    return google_breakpad::PageAllocator::Alloc(*(google_breakpad::PageAllocator **)a1, a2);
  else
    return *(_QWORD *)(a1 + 8);
}

