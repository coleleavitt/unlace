__int64 __fastcall operator new(unsigned __int64 a1, google_breakpad::PageAllocator *a2)
{
  return google_breakpad::PageAllocator::Alloc(a2, a1);
}

