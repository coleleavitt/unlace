__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::construct<unsigned char,unsigned char>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<unsigned char>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::_S_construct<unsigned char,unsigned char>(
           a1,
           a2,
           v3);
}

