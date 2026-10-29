__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<char>>::construct<char,char>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<char>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<char>>::_S_construct<char,char>(a1, a2, v3);
}

