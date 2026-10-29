__int64 __fastcall std::_Destroy<unsigned char *,google_breakpad::PageStdAllocator<unsigned char>>(
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
    v4 = std::__addressof<unsigned char>(a1);
    std::allocator_traits<google_breakpad::PageStdAllocator<unsigned char>>::destroy<unsigned char>(a3, v4);
    ++a1;
  }
  return result;
}

