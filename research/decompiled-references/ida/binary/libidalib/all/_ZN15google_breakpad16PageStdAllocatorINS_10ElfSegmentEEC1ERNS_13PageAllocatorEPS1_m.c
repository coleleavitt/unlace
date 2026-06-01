// Alternative name is '_ZN15google_breakpad16PageStdAllocatorINS_10ElfSegmentEEC2ERNS_13PageAllocatorEPS1_m'
_QWORD *__fastcall google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>::PageStdAllocator(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return a1;
}

