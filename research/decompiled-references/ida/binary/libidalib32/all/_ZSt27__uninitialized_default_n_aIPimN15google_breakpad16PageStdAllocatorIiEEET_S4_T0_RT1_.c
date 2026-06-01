__int64 __fastcall std::__uninitialized_default_n_a<int *,unsigned long,google_breakpad::PageStdAllocator<int>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi

  while ( a2 )
  {
    v3 = std::__addressof<int>(a1);
    std::allocator_traits<google_breakpad::PageStdAllocator<int>>::construct<int>(a3, v3);
    --a2;
    a1 += 4;
  }
  return a1;
}

