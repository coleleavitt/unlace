__int64 __fastcall std::_Destroy<google_breakpad::ElfSegment *,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1 == a2 )
      break;
    v4 = std::__addressof<google_breakpad::ElfSegment>(a1);
    std::allocator_traits<google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::destroy<google_breakpad::ElfSegment>(
      a3,
      v4);
    a1 += 16;
  }
  return result;
}

