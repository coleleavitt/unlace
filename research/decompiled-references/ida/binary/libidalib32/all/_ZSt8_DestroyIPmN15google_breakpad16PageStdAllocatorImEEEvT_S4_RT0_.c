__int64 __fastcall std::_Destroy<unsigned long *,google_breakpad::PageStdAllocator<unsigned long>>(
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
    v4 = std::__addressof<unsigned long>(a1);
    std::allocator_traits<google_breakpad::PageStdAllocator<unsigned long>>::destroy<unsigned long>(a3, v4);
    a1 += 8;
  }
  return result;
}

