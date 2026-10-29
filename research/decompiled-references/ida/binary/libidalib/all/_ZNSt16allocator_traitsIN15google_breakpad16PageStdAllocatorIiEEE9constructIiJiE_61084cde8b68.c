__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<int>>::construct<int,int>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<int>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<int>>::_S_construct<int,int>(a1, a2, v3);
}

