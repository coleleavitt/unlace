// Alternative name is '_ZNSt12_Vector_baseIcN15google_breakpad16PageStdAllocatorIcEEED2Ev'
__int64 __fastcall std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::~_Vector_base(__int64 a1)
{
  return std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24));
}

