// Alternative name is '_ZNSt12_Vector_baseIN15google_breakpad10ElfSegmentENS0_16PageStdAllocatorIS1_EEE12_Vector_implC2ERKS3_'
_QWORD *__fastcall std::_Vector_base<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::_Vector_impl::_Vector_impl(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rdx

  v2 = a2[1];
  *a1 = *a2;
  a1[1] = v2;
  a1[2] = a2[2];
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return a1;
}

