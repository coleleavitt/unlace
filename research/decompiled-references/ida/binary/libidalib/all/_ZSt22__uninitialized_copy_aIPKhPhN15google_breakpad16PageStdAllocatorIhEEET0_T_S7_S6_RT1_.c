__int64 __fastcall std::__uninitialized_copy_a<unsigned char const*,unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  while ( a1 != a2 )
  {
    v4 = std::__addressof<unsigned char>(a3);
    std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::construct<unsigned char,unsigned char const&>(
      a4,
      v4,
      a1++);
    ++a3;
  }
  return a3;
}

