// Alternative name is '_ZN15google_breakpad13PageAllocatorD2Ev'
void __fastcall google_breakpad::PageAllocator::~PageAllocator(google_breakpad::PageAllocator *this)
{
  google_breakpad::PageAllocator::FreeAll(this);
}

