__int64 __fastcall std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::construct<unsigned long,unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = std::forward<unsigned long>(a3);
  return std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::_S_construct<unsigned long,unsigned long>(
           a1,
           a2,
           v3);
}

