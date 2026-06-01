// Alternative name is '_ZN15google_breakpad13PageAllocatorC2Ev'
google_breakpad::PageAllocator *__fastcall google_breakpad::PageAllocator::PageAllocator(
        google_breakpad::PageAllocator *this)
{
  *(_QWORD *)this = getpagesize();
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  return this;
}

