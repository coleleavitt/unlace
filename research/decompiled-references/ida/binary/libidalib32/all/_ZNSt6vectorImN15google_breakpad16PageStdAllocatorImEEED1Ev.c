// Alternative name is '_ZNSt6vectorImN15google_breakpad16PageStdAllocatorImEEED2Ev'
__int64 __fastcall std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::~vector(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::_M_get_Tp_allocator(a1);
  std::_Destroy<unsigned long *,google_breakpad::PageStdAllocator<unsigned long>>(
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    Tp_allocator);
  return std::_Vector_base<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::~_Vector_base(a1);
}

