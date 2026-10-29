// Alternative name is '_ZNSt12_Vector_baseIhN15google_breakpad16PageStdAllocatorIhEEED2Ev'
__int64 __fastcall std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::~_Vector_base(
        __int64 a1)
{
  return std::_Vector_base<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24));
}

