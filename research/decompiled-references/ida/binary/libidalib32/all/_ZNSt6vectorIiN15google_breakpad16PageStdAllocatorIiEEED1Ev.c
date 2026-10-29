// Alternative name is '_ZNSt6vectorIiN15google_breakpad16PageStdAllocatorIiEEED2Ev'
__int64 __fastcall std::vector<int,google_breakpad::PageStdAllocator<int>>::~vector(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::_M_get_Tp_allocator(a1);
  std::_Destroy<int *,google_breakpad::PageStdAllocator<int>>(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), Tp_allocator);
  return std::_Vector_base<int,google_breakpad::PageStdAllocator<int>>::~_Vector_base(a1);
}

