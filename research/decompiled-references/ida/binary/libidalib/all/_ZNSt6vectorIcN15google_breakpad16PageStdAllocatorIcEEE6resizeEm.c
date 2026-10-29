char __fastcall std::vector<char,google_breakpad::PageStdAllocator<char>>::resize(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a2 <= std::vector<char,google_breakpad::PageStdAllocator<char>>::size(a1) )
  {
    result = a2 < std::vector<char,google_breakpad::PageStdAllocator<char>>::size(a1);
    if ( result )
      return std::vector<char,google_breakpad::PageStdAllocator<char>>::_M_erase_at_end(a1, a2 + *(_QWORD *)(a1 + 24));
  }
  else
  {
    v2 = std::vector<char,google_breakpad::PageStdAllocator<char>>::size(a1);
    return std::vector<char,google_breakpad::PageStdAllocator<char>>::_M_default_append(a1, a2 - v2);
  }
  return result;
}

