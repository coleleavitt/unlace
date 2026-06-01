__int64 __fastcall std::__uninitialized_default_n_a<unsigned char *,unsigned long,google_breakpad::PageStdAllocator<unsigned char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi

  while ( a2 )
  {
    v3 = std::__addressof<unsigned char>(a1);
    std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::construct<unsigned char>(a3, v3);
    --a2;
    ++a1;
  }
  return a1;
}

