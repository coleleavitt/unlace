// Alternative name is '_ZNSt12_Vector_baseImN15google_breakpad16PageStdAllocatorImEEED1Ev'
__int64 __fastcall std::_Vector_base<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::~_Vector_base(
        __int64 a1)
{
  return std::_Vector_base<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::_M_deallocate(
           a1,
           *(_QWORD *)(a1 + 24),
           (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3);
}

