// Alternative name is '_ZNSt12_Vector_baseIiN15google_breakpad16PageStdAllocatorIiEEED2Ev'
__int64 __fastcall std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::~_Vector_base(__int64 a1)
{
  return std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 2);
}

