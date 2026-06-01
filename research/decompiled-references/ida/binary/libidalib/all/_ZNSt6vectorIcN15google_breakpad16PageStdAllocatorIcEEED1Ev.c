// Alternative name is '_ZNSt6vectorIcN15google_breakpad16PageStdAllocatorIcEEED2Ev'
__int64 __fastcall std::vector<char,google_breakpad::PageStdAllocator<char>>::~vector(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::_M_get_Tp_allocator(a1);
  std::_Destroy<char *,google_breakpad::PageStdAllocator<char>>(
    *(_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 32),
    Tp_allocator);
  return std::_Vector_base<char,google_breakpad::PageStdAllocator<char>>::~_Vector_base(a1);
}

