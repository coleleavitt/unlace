__int64 __fastcall std::vector<int,google_breakpad::PageStdAllocator<int>>::push_back(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    v3 = std::vector<int,google_breakpad::PageStdAllocator<int>>::end(a1);
    return std::vector<int,google_breakpad::PageStdAllocator<int>>::_M_realloc_insert<int const&>(a1, v3, a2);
  }
  else
  {
    std::allocator_traits<google_breakpad::PageStdAllocator<int>>::construct<int,int const&>(
      a1,
      *(_QWORD *)(a1 + 32),
      a2);
    *(_QWORD *)(a1 + 32) += 4LL;
    return a1;
  }
}

